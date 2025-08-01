// Copyright (c) 2025 Epic Games Tools
// Licensed under the MIT license (https://opensource.org/license/mit/)

#pragma once

// --- Symbol ------------------------------------------------------------------

typedef enum
{
  LNK_SymbolScope_Defined,
  LNK_SymbolScope_Import,
  LNK_SymbolScope_Lib,
  LNK_SymbolScope_Count
} LNK_SymbolScope;

typedef struct LNK_SymbolDefined
{
  struct LNK_Obj *obj;
  U32             symbol_idx;
} LNK_SymbolDefined;

typedef struct LNK_SymbolLib
{
  struct LNK_Lib *lib;
  U64             member_offset;
} LNK_SymbolLib;

typedef struct LNK_SymbolUndefined
{
  struct LNK_Obj *obj;
} LNK_SymbolUndefined;

typedef struct LNK_SymbolImport
{
  String8 import_header;
} LNK_SymbolImport;

typedef struct LNK_Symbol
{
  String8 name;
  union {
    LNK_SymbolDefined   defined;
    LNK_SymbolLib       lib;
    LNK_SymbolImport    imp;
    LNK_SymbolUndefined undef;
  } u;
} LNK_Symbol;

// --- Symbol Containers -------------------------------------------------------

typedef struct LNK_SymbolNode
{
  struct LNK_SymbolNode *next;
  LNK_Symbol            *data;
} LNK_SymbolNode;

typedef struct LNK_SymbolList
{
  U64             count;
  LNK_SymbolNode *first;
  LNK_SymbolNode *last;
} LNK_SymbolList;

typedef struct LNK_SymbolNodeArray
{
  U64              count;
  LNK_SymbolNode **v;
} LNK_SymbolNodeArray;

typedef struct LNK_SymbolArray
{
  U64         count;
  LNK_Symbol *v;
} LNK_SymbolArray;

// --- Symbol Hash Trie --------------------------------------------------------

typedef struct LNK_SymbolHashTrie
{
  String8                   *name;
  LNK_Symbol                *symbol;
  struct LNK_SymbolHashTrie *child[4];
} LNK_SymbolHashTrie;

typedef struct LNK_SymbolHashTrieChunk
{
  struct LNK_SymbolHashTrieChunk *next;
  U64                             count;
  U64                             cap;
  LNK_SymbolHashTrie             *v;
} LNK_SymbolHashTrieChunk;

typedef struct LNK_SymbolHashTrieChunkList
{
  U64                      count;
  LNK_SymbolHashTrieChunk *first;
  LNK_SymbolHashTrieChunk *last;
} LNK_SymbolHashTrieChunkList;

// --- Symbol Table ------------------------------------------------------------

typedef struct LNK_SymbolTable
{
  TP_Arena                    *arena;
  LNK_SymbolHashTrie          *scopes[LNK_SymbolScope_Count];
  LNK_SymbolHashTrieChunkList *chunk_lists[LNK_SymbolScope_Count];
  HashTable                   *alt_names;
} LNK_SymbolTable;

// --- Workers Contensts -------------------------------------------------------

typedef struct
{
  LNK_SymbolTable          *symtab;
  LNK_SymbolHashTrieChunk **chunks;
} LNK_FinalizeWeakSymbolsTask;

// --- Symbol Make -------------------------------------------------------------

internal LNK_Symbol * lnk_make_defined_symbol(Arena *arena, String8 name, struct LNK_Obj *obj, U32 symbol_idx);
internal LNK_Symbol * lnk_make_lib_symbol(Arena *arena, String8 name, struct LNK_Lib *lib, U64 member_offset);
internal LNK_Symbol * lnk_make_undefined_symbol(Arena *arena, String8 name, struct LNK_Obj *obj);
internal LNK_Symbol * lnk_make_import_symbol(Arena *arena, String8 name, String8 import_header);

// --- Symbol Containers ------------------------------------------------------

internal void                lnk_symbol_list_push_node(LNK_SymbolList *list, LNK_SymbolNode *node);
internal LNK_SymbolNode *    lnk_symbol_list_push(Arena *arena, LNK_SymbolList *list, LNK_Symbol *symbol);
internal void                lnk_symbol_list_concat_in_place(LNK_SymbolList *list, LNK_SymbolList *to_concat);
internal LNK_SymbolList      lnk_symbol_list_from_array(Arena *arena, LNK_SymbolArray arr);
internal LNK_SymbolNodeArray lnk_symbol_node_array_from_list(Arena *arena, LNK_SymbolList list);
internal LNK_SymbolArray     lnk_symbol_array_from_list(Arena *arena, LNK_SymbolList list);

// --- Symbol Hash Trie --------------------------------------------------------

internal void                 lnk_symbol_hash_trie_insert_or_replace(Arena *arena, LNK_SymbolHashTrieChunkList *chunks, LNK_SymbolHashTrie **trie, U64 hash, LNK_SymbolScope scope, LNK_Symbol *symbol);
internal LNK_SymbolHashTrie * lnk_symbol_hash_trie_search(LNK_SymbolHashTrie *trie, U64 hash, String8 name);
internal void                 lnk_symbol_hash_trie_remove(LNK_SymbolHashTrie *trie);

// --- Symbol Table ------------------------------------------------------------

internal U64 lnk_symbol_hash(String8 string);

internal LNK_SymbolTable * lnk_symbol_table_init(TP_Arena *arena);
internal void              lnk_symbol_table_push(LNK_SymbolTable *symtab, LNK_SymbolScope scope, LNK_Symbol *symbol);
internal LNK_Symbol *      lnk_symbol_table_search(LNK_SymbolTable *symtab, LNK_SymbolScope scope, String8 name);
internal LNK_Symbol *      lnk_symbol_table_searchf(LNK_SymbolTable *symtab, LNK_SymbolScope scope, char *fmt, ...);

internal void lnk_symbol_table_push_alt_name(LNK_SymbolTable *symtab, struct LNK_Obj *obj, String8 from, String8 to);

internal void lnk_finalize_weak_symbols(TP_Context *tp, LNK_SymbolTable *symtab);

// --- Symbol Contrib Helpers --------------------------------------------------

internal ISectOff lnk_sc_from_symbol(LNK_Symbol *symbol);
internal U64      lnk_isect_from_symbol(LNK_Symbol *symbol);
internal U64      lnk_sect_off_from_symbol(LNK_Symbol *symbol);
internal U64      lnk_virt_off_from_symbol(COFF_SectionHeader **section_table, LNK_Symbol *symbol);
internal U64      lnk_file_off_from_symbol(COFF_SectionHeader **section_table, LNK_Symbol *symbol);

internal COFF_ParsedSymbol lnk_parsed_symbol_from_defined(LNK_Symbol *symbol);

