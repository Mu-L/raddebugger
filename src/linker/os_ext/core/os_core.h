// Copyright (c) 2024 Epic Games Tools
// Licensed under the MIT license (https://opensource.org/license/mit/)

#pragma once

#if OS_WINDOWS
# include "os_core_win32.c"
#else
# error "undefined OS"
#endif

typedef struct
{
  String8Array path_arr;
  OS_Handle   *handle_arr;
  U64         *size_arr;
} OS_DataSizeFromFilePathTask;

typedef struct
{
  String8Array data_arr;
  OS_Handle   *handle_arr;
  U64         *size_arr;
  U64         *off_arr;
  U8          *buffer;
} OS_DataFromFilePathTask;

internal String8Array os_data_from_file_path_parallel(TP_Context *tp, Arena *arena, String8Array path_arr);
internal String8List  os_file_search(Arena *arena, String8List dir_list, String8 file_path);
internal B32          os_folder_path_exists(String8 path);

internal OperatingSystem operating_system_from_string(String8 string);

internal B32 os_set_large_pages(B32 toggle);

internal U32 os_get_process_start_time_unix(void);

internal B32     os_try_guid_from_string(String8 string, OS_Guid *guid_out);
internal OS_Guid os_guid_from_string(String8 string);
