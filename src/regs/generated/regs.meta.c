// Copyright (c) Epic Games Tools
// Licensed under the MIT license (https://opensource.org/license/mit/)

//- GENERATED CODE

internal U64 regs_block_size_from_arch(Arch arch)
{
U64 result = 8;
switch(arch)
{
default:{}break;
case Arch_x64:{result = sizeof(REGS_RegBlockX64);}break;
case Arch_x86:{result = sizeof(REGS_RegBlockX86);}break;
}
return result;
}
internal U64 regs_reg_code_count_from_arch(Arch arch)
{
U64 result = 0;
switch(arch)
{
default:{}break;
case Arch_x64:{result = REGS_RegCodeX64_COUNT;}break;
case Arch_x86:{result = REGS_RegCodeX86_COUNT;}break;
}
return result;
}
internal U64 regs_alias_code_count_from_arch(Arch arch)
{
U64 result = 0;
switch(arch)
{
default:{}break;
case Arch_x64:{result = REGS_AliasCodeX64_COUNT;}break;
case Arch_x86:{result = REGS_AliasCodeX86_COUNT;}break;
}
return result;
}
internal String8 *regs_reg_code_string_table_from_arch(Arch arch)
{
String8 *result = 0;
switch(arch)
{
default:{}break;
case Arch_x64:{result = regs_g_reg_code_x64_string_table;}break;
case Arch_x86:{result = regs_g_reg_code_x86_string_table;}break;
}
return result;
}
internal String8 *regs_alias_code_string_table_from_arch(Arch arch)
{
String8 *result = 0;
switch(arch)
{
default:{}break;
case Arch_x64:{result = regs_g_alias_code_x64_string_table;}break;
case Arch_x86:{result = regs_g_alias_code_x86_string_table;}break;
}
return result;
}
internal REGS_Rng *regs_reg_code_rng_table_from_arch(Arch arch)
{
REGS_Rng *result = 0;
switch(arch)
{
default:{}break;
case Arch_x64:{result = regs_g_reg_code_x64_rng_table;}break;
case Arch_x86:{result = regs_g_reg_code_x86_rng_table;}break;
}
return result;
}
internal REGS_Slice *regs_alias_code_slice_table_from_arch(Arch arch)
{
REGS_Slice *result = 0;
switch(arch)
{
default:{}break;
case Arch_x64:{result = regs_g_alias_code_x64_slice_table;}break;
case Arch_x86:{result = regs_g_alias_code_x86_slice_table;}break;
}
return result;
}
internal REGS_UsageKind *regs_reg_code_usage_kind_table_from_arch(Arch arch)
{
REGS_UsageKind *result = 0;
switch(arch)
{
default:{}break;
case Arch_x64:{result = regs_g_reg_code_x64_usage_kind_table;}break;
case Arch_x86:{result = regs_g_reg_code_x86_usage_kind_table;}break;
}
return result;
}
internal REGS_UsageKind *regs_alias_code_usage_kind_table_from_arch(Arch arch)
{
REGS_UsageKind *result = 0;
switch(arch)
{
default:{}break;
case Arch_x64:{result = regs_g_alias_code_x64_usage_kind_table;}break;
case Arch_x86:{result = regs_g_alias_code_x86_usage_kind_table;}break;
}
return result;
}
C_LINKAGE_BEGIN
REGS_UsageKind regs_g_reg_code_x64_usage_kind_table[101] =
{
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
};

REGS_UsageKind regs_g_alias_code_x64_usage_kind_table[96] =
{
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
};

String8 regs_g_reg_code_x64_string_table[101] =
{
str8_lit_comp(""),
str8_lit_comp("rax"),
str8_lit_comp("rcx"),
str8_lit_comp("rdx"),
str8_lit_comp("rbx"),
str8_lit_comp("rsp"),
str8_lit_comp("rbp"),
str8_lit_comp("rsi"),
str8_lit_comp("rdi"),
str8_lit_comp("r8"),
str8_lit_comp("r9"),
str8_lit_comp("r10"),
str8_lit_comp("r11"),
str8_lit_comp("r12"),
str8_lit_comp("r13"),
str8_lit_comp("r14"),
str8_lit_comp("r15"),
str8_lit_comp("fsbase"),
str8_lit_comp("gsbase"),
str8_lit_comp("rip"),
str8_lit_comp("rflags"),
str8_lit_comp("dr0"),
str8_lit_comp("dr1"),
str8_lit_comp("dr2"),
str8_lit_comp("dr3"),
str8_lit_comp("dr4"),
str8_lit_comp("dr5"),
str8_lit_comp("dr6"),
str8_lit_comp("dr7"),
str8_lit_comp("fpr0"),
str8_lit_comp("fpr1"),
str8_lit_comp("fpr2"),
str8_lit_comp("fpr3"),
str8_lit_comp("fpr4"),
str8_lit_comp("fpr5"),
str8_lit_comp("fpr6"),
str8_lit_comp("fpr7"),
str8_lit_comp("st0"),
str8_lit_comp("st1"),
str8_lit_comp("st2"),
str8_lit_comp("st3"),
str8_lit_comp("st4"),
str8_lit_comp("st5"),
str8_lit_comp("st6"),
str8_lit_comp("st7"),
str8_lit_comp("fcw"),
str8_lit_comp("fsw"),
str8_lit_comp("ftw"),
str8_lit_comp("fop"),
str8_lit_comp("fcs"),
str8_lit_comp("fds"),
str8_lit_comp("fip"),
str8_lit_comp("fdp"),
str8_lit_comp("mxcsr"),
str8_lit_comp("mxcsr_mask"),
str8_lit_comp("ss"),
str8_lit_comp("cs"),
str8_lit_comp("ds"),
str8_lit_comp("es"),
str8_lit_comp("fs"),
str8_lit_comp("gs"),
str8_lit_comp("zmm0"),
str8_lit_comp("zmm1"),
str8_lit_comp("zmm2"),
str8_lit_comp("zmm3"),
str8_lit_comp("zmm4"),
str8_lit_comp("zmm5"),
str8_lit_comp("zmm6"),
str8_lit_comp("zmm7"),
str8_lit_comp("zmm8"),
str8_lit_comp("zmm9"),
str8_lit_comp("zmm10"),
str8_lit_comp("zmm11"),
str8_lit_comp("zmm12"),
str8_lit_comp("zmm13"),
str8_lit_comp("zmm14"),
str8_lit_comp("zmm15"),
str8_lit_comp("zmm16"),
str8_lit_comp("zmm17"),
str8_lit_comp("zmm18"),
str8_lit_comp("zmm19"),
str8_lit_comp("zmm20"),
str8_lit_comp("zmm21"),
str8_lit_comp("zmm22"),
str8_lit_comp("zmm23"),
str8_lit_comp("zmm24"),
str8_lit_comp("zmm25"),
str8_lit_comp("zmm26"),
str8_lit_comp("zmm27"),
str8_lit_comp("zmm28"),
str8_lit_comp("zmm29"),
str8_lit_comp("zmm30"),
str8_lit_comp("zmm31"),
str8_lit_comp("k0"),
str8_lit_comp("k1"),
str8_lit_comp("k2"),
str8_lit_comp("k3"),
str8_lit_comp("k4"),
str8_lit_comp("k5"),
str8_lit_comp("k6"),
str8_lit_comp("k7"),
};

String8 regs_g_alias_code_x64_string_table[96] =
{
str8_lit_comp(""),
str8_lit_comp("eax"),
str8_lit_comp("ecx"),
str8_lit_comp("edx"),
str8_lit_comp("ebx"),
str8_lit_comp("esp"),
str8_lit_comp("ebp"),
str8_lit_comp("esi"),
str8_lit_comp("edi"),
str8_lit_comp("r8d"),
str8_lit_comp("r9d"),
str8_lit_comp("r10d"),
str8_lit_comp("r11d"),
str8_lit_comp("r12d"),
str8_lit_comp("r13d"),
str8_lit_comp("r14d"),
str8_lit_comp("r15d"),
str8_lit_comp("eip"),
str8_lit_comp("eflags"),
str8_lit_comp("ax"),
str8_lit_comp("cx"),
str8_lit_comp("dx"),
str8_lit_comp("bx"),
str8_lit_comp("si"),
str8_lit_comp("di"),
str8_lit_comp("sp"),
str8_lit_comp("bp"),
str8_lit_comp("ip"),
str8_lit_comp("r8w"),
str8_lit_comp("r9w"),
str8_lit_comp("r10w"),
str8_lit_comp("r11w"),
str8_lit_comp("r12w"),
str8_lit_comp("r13w"),
str8_lit_comp("r14w"),
str8_lit_comp("r15w"),
str8_lit_comp("al"),
str8_lit_comp("cl"),
str8_lit_comp("dl"),
str8_lit_comp("bl"),
str8_lit_comp("sil"),
str8_lit_comp("dil"),
str8_lit_comp("bpl"),
str8_lit_comp("spl"),
str8_lit_comp("r8b"),
str8_lit_comp("r9b"),
str8_lit_comp("r10b"),
str8_lit_comp("r11b"),
str8_lit_comp("r12b"),
str8_lit_comp("r13b"),
str8_lit_comp("r14b"),
str8_lit_comp("r15b"),
str8_lit_comp("ah"),
str8_lit_comp("ch"),
str8_lit_comp("dh"),
str8_lit_comp("bh"),
str8_lit_comp("xmm0"),
str8_lit_comp("xmm1"),
str8_lit_comp("xmm2"),
str8_lit_comp("xmm3"),
str8_lit_comp("xmm4"),
str8_lit_comp("xmm5"),
str8_lit_comp("xmm6"),
str8_lit_comp("xmm7"),
str8_lit_comp("xmm8"),
str8_lit_comp("xmm9"),
str8_lit_comp("xmm10"),
str8_lit_comp("xmm11"),
str8_lit_comp("xmm12"),
str8_lit_comp("xmm13"),
str8_lit_comp("xmm14"),
str8_lit_comp("xmm15"),
str8_lit_comp("ymm0"),
str8_lit_comp("ymm1"),
str8_lit_comp("ymm2"),
str8_lit_comp("ymm3"),
str8_lit_comp("ymm4"),
str8_lit_comp("ymm5"),
str8_lit_comp("ymm6"),
str8_lit_comp("ymm7"),
str8_lit_comp("ymm8"),
str8_lit_comp("ymm9"),
str8_lit_comp("ymm10"),
str8_lit_comp("ymm11"),
str8_lit_comp("ymm12"),
str8_lit_comp("ymm13"),
str8_lit_comp("ymm14"),
str8_lit_comp("ymm15"),
str8_lit_comp("mm0"),
str8_lit_comp("mm1"),
str8_lit_comp("mm2"),
str8_lit_comp("mm3"),
str8_lit_comp("mm4"),
str8_lit_comp("mm5"),
str8_lit_comp("mm6"),
str8_lit_comp("mm7"),
};

REGS_Rng regs_g_reg_code_x64_rng_table[101] =
{
{0},
{(U16)OffsetOf(REGS_RegBlockX64, rax), 8},
{(U16)OffsetOf(REGS_RegBlockX64, rcx), 8},
{(U16)OffsetOf(REGS_RegBlockX64, rdx), 8},
{(U16)OffsetOf(REGS_RegBlockX64, rbx), 8},
{(U16)OffsetOf(REGS_RegBlockX64, rsp), 8},
{(U16)OffsetOf(REGS_RegBlockX64, rbp), 8},
{(U16)OffsetOf(REGS_RegBlockX64, rsi), 8},
{(U16)OffsetOf(REGS_RegBlockX64, rdi), 8},
{(U16)OffsetOf(REGS_RegBlockX64, r8), 8},
{(U16)OffsetOf(REGS_RegBlockX64, r9), 8},
{(U16)OffsetOf(REGS_RegBlockX64, r10), 8},
{(U16)OffsetOf(REGS_RegBlockX64, r11), 8},
{(U16)OffsetOf(REGS_RegBlockX64, r12), 8},
{(U16)OffsetOf(REGS_RegBlockX64, r13), 8},
{(U16)OffsetOf(REGS_RegBlockX64, r14), 8},
{(U16)OffsetOf(REGS_RegBlockX64, r15), 8},
{(U16)OffsetOf(REGS_RegBlockX64, fsbase), 8},
{(U16)OffsetOf(REGS_RegBlockX64, gsbase), 8},
{(U16)OffsetOf(REGS_RegBlockX64, rip), 8},
{(U16)OffsetOf(REGS_RegBlockX64, rflags), 8},
{(U16)OffsetOf(REGS_RegBlockX64, dr0), 8},
{(U16)OffsetOf(REGS_RegBlockX64, dr1), 8},
{(U16)OffsetOf(REGS_RegBlockX64, dr2), 8},
{(U16)OffsetOf(REGS_RegBlockX64, dr3), 8},
{(U16)OffsetOf(REGS_RegBlockX64, dr4), 8},
{(U16)OffsetOf(REGS_RegBlockX64, dr5), 8},
{(U16)OffsetOf(REGS_RegBlockX64, dr6), 8},
{(U16)OffsetOf(REGS_RegBlockX64, dr7), 8},
{(U16)OffsetOf(REGS_RegBlockX64, fpr0), 10},
{(U16)OffsetOf(REGS_RegBlockX64, fpr1), 10},
{(U16)OffsetOf(REGS_RegBlockX64, fpr2), 10},
{(U16)OffsetOf(REGS_RegBlockX64, fpr3), 10},
{(U16)OffsetOf(REGS_RegBlockX64, fpr4), 10},
{(U16)OffsetOf(REGS_RegBlockX64, fpr5), 10},
{(U16)OffsetOf(REGS_RegBlockX64, fpr6), 10},
{(U16)OffsetOf(REGS_RegBlockX64, fpr7), 10},
{(U16)OffsetOf(REGS_RegBlockX64, st0), 10},
{(U16)OffsetOf(REGS_RegBlockX64, st1), 10},
{(U16)OffsetOf(REGS_RegBlockX64, st2), 10},
{(U16)OffsetOf(REGS_RegBlockX64, st3), 10},
{(U16)OffsetOf(REGS_RegBlockX64, st4), 10},
{(U16)OffsetOf(REGS_RegBlockX64, st5), 10},
{(U16)OffsetOf(REGS_RegBlockX64, st6), 10},
{(U16)OffsetOf(REGS_RegBlockX64, st7), 10},
{(U16)OffsetOf(REGS_RegBlockX64, fcw), 2},
{(U16)OffsetOf(REGS_RegBlockX64, fsw), 2},
{(U16)OffsetOf(REGS_RegBlockX64, ftw), 2},
{(U16)OffsetOf(REGS_RegBlockX64, fop), 2},
{(U16)OffsetOf(REGS_RegBlockX64, fcs), 2},
{(U16)OffsetOf(REGS_RegBlockX64, fds), 2},
{(U16)OffsetOf(REGS_RegBlockX64, fip), 8},
{(U16)OffsetOf(REGS_RegBlockX64, fdp), 8},
{(U16)OffsetOf(REGS_RegBlockX64, mxcsr), 4},
{(U16)OffsetOf(REGS_RegBlockX64, mxcsr_mask), 4},
{(U16)OffsetOf(REGS_RegBlockX64, ss), 2},
{(U16)OffsetOf(REGS_RegBlockX64, cs), 2},
{(U16)OffsetOf(REGS_RegBlockX64, ds), 2},
{(U16)OffsetOf(REGS_RegBlockX64, es), 2},
{(U16)OffsetOf(REGS_RegBlockX64, fs), 2},
{(U16)OffsetOf(REGS_RegBlockX64, gs), 2},
{(U16)OffsetOf(REGS_RegBlockX64, zmm0), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm1), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm2), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm3), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm4), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm5), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm6), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm7), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm8), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm9), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm10), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm11), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm12), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm13), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm14), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm15), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm16), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm17), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm18), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm19), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm20), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm21), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm22), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm23), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm24), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm25), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm26), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm27), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm28), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm29), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm30), 64},
{(U16)OffsetOf(REGS_RegBlockX64, zmm31), 64},
{(U16)OffsetOf(REGS_RegBlockX64, k0), 8},
{(U16)OffsetOf(REGS_RegBlockX64, k1), 8},
{(U16)OffsetOf(REGS_RegBlockX64, k2), 8},
{(U16)OffsetOf(REGS_RegBlockX64, k3), 8},
{(U16)OffsetOf(REGS_RegBlockX64, k4), 8},
{(U16)OffsetOf(REGS_RegBlockX64, k5), 8},
{(U16)OffsetOf(REGS_RegBlockX64, k6), 8},
{(U16)OffsetOf(REGS_RegBlockX64, k7), 8},
};

REGS_Slice regs_g_alias_code_x64_slice_table[96] =
{
{0},
{REGS_RegCodeX64_rax, 0, 4},
{REGS_RegCodeX64_rcx, 0, 4},
{REGS_RegCodeX64_rdx, 0, 4},
{REGS_RegCodeX64_rbx, 0, 4},
{REGS_RegCodeX64_rsp, 0, 4},
{REGS_RegCodeX64_rbp, 0, 4},
{REGS_RegCodeX64_rsi, 0, 4},
{REGS_RegCodeX64_rdi, 0, 4},
{REGS_RegCodeX64_r8, 0, 4},
{REGS_RegCodeX64_r9, 0, 4},
{REGS_RegCodeX64_r10, 0, 4},
{REGS_RegCodeX64_r11, 0, 4},
{REGS_RegCodeX64_r12, 0, 4},
{REGS_RegCodeX64_r13, 0, 4},
{REGS_RegCodeX64_r14, 0, 4},
{REGS_RegCodeX64_r15, 0, 4},
{REGS_RegCodeX64_rip, 0, 4},
{REGS_RegCodeX64_rflags, 0, 4},
{REGS_RegCodeX64_rax, 0, 2},
{REGS_RegCodeX64_rcx, 0, 2},
{REGS_RegCodeX64_rdx, 0, 2},
{REGS_RegCodeX64_rbx, 0, 2},
{REGS_RegCodeX64_rsi, 0, 2},
{REGS_RegCodeX64_rdi, 0, 2},
{REGS_RegCodeX64_rsp, 0, 2},
{REGS_RegCodeX64_rbp, 0, 2},
{REGS_RegCodeX64_rip, 0, 2},
{REGS_RegCodeX64_r8, 0, 2},
{REGS_RegCodeX64_r9, 0, 2},
{REGS_RegCodeX64_r10, 0, 2},
{REGS_RegCodeX64_r11, 0, 2},
{REGS_RegCodeX64_r12, 0, 2},
{REGS_RegCodeX64_r13, 0, 2},
{REGS_RegCodeX64_r14, 0, 2},
{REGS_RegCodeX64_r15, 0, 2},
{REGS_RegCodeX64_rax, 0, 1},
{REGS_RegCodeX64_rcx, 0, 1},
{REGS_RegCodeX64_rdx, 0, 1},
{REGS_RegCodeX64_rbx, 0, 1},
{REGS_RegCodeX64_rsi, 0, 1},
{REGS_RegCodeX64_rdi, 0, 1},
{REGS_RegCodeX64_rbp, 0, 1},
{REGS_RegCodeX64_rsp, 0, 1},
{REGS_RegCodeX64_r8, 0, 1},
{REGS_RegCodeX64_r9, 0, 1},
{REGS_RegCodeX64_r10, 0, 1},
{REGS_RegCodeX64_r11, 0, 1},
{REGS_RegCodeX64_r12, 0, 1},
{REGS_RegCodeX64_r13, 0, 1},
{REGS_RegCodeX64_r14, 0, 1},
{REGS_RegCodeX64_r15, 0, 1},
{REGS_RegCodeX64_rax, 1, 1},
{REGS_RegCodeX64_rcx, 1, 1},
{REGS_RegCodeX64_rdx, 1, 1},
{REGS_RegCodeX64_rbx, 1, 1},
{REGS_RegCodeX64_zmm0, 0, 16},
{REGS_RegCodeX64_zmm1, 0, 16},
{REGS_RegCodeX64_zmm2, 0, 16},
{REGS_RegCodeX64_zmm3, 0, 16},
{REGS_RegCodeX64_zmm4, 0, 16},
{REGS_RegCodeX64_zmm5, 0, 16},
{REGS_RegCodeX64_zmm6, 0, 16},
{REGS_RegCodeX64_zmm7, 0, 16},
{REGS_RegCodeX64_zmm8, 0, 16},
{REGS_RegCodeX64_zmm9, 0, 16},
{REGS_RegCodeX64_zmm10, 0, 16},
{REGS_RegCodeX64_zmm11, 0, 16},
{REGS_RegCodeX64_zmm12, 0, 16},
{REGS_RegCodeX64_zmm13, 0, 16},
{REGS_RegCodeX64_zmm14, 0, 16},
{REGS_RegCodeX64_zmm15, 0, 16},
{REGS_RegCodeX64_zmm0, 0, 32},
{REGS_RegCodeX64_zmm1, 0, 32},
{REGS_RegCodeX64_zmm2, 0, 32},
{REGS_RegCodeX64_zmm3, 0, 32},
{REGS_RegCodeX64_zmm4, 0, 32},
{REGS_RegCodeX64_zmm5, 0, 32},
{REGS_RegCodeX64_zmm6, 0, 32},
{REGS_RegCodeX64_zmm7, 0, 32},
{REGS_RegCodeX64_zmm8, 0, 32},
{REGS_RegCodeX64_zmm9, 0, 32},
{REGS_RegCodeX64_zmm10, 0, 32},
{REGS_RegCodeX64_zmm11, 0, 32},
{REGS_RegCodeX64_zmm12, 0, 32},
{REGS_RegCodeX64_zmm13, 0, 32},
{REGS_RegCodeX64_zmm14, 0, 32},
{REGS_RegCodeX64_zmm15, 0, 32},
{REGS_RegCodeX64_fpr0, 0, 8},
{REGS_RegCodeX64_fpr1, 0, 8},
{REGS_RegCodeX64_fpr2, 0, 8},
{REGS_RegCodeX64_fpr3, 0, 8},
{REGS_RegCodeX64_fpr4, 0, 8},
{REGS_RegCodeX64_fpr5, 0, 8},
{REGS_RegCodeX64_fpr6, 0, 8},
{REGS_RegCodeX64_fpr7, 0, 8},
};

REGS_UsageKind regs_g_reg_code_x86_usage_kind_table[61] =
{
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
};

REGS_UsageKind regs_g_alias_code_x86_usage_kind_table[36] =
{
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
REGS_UsageKind_Normal,
};

String8 regs_g_reg_code_x86_string_table[61] =
{
str8_lit_comp(""),
str8_lit_comp("eax"),
str8_lit_comp("ecx"),
str8_lit_comp("edx"),
str8_lit_comp("ebx"),
str8_lit_comp("esp"),
str8_lit_comp("ebp"),
str8_lit_comp("esi"),
str8_lit_comp("edi"),
str8_lit_comp("fsbase"),
str8_lit_comp("gsbase"),
str8_lit_comp("eflags"),
str8_lit_comp("eip"),
str8_lit_comp("dr0"),
str8_lit_comp("dr1"),
str8_lit_comp("dr2"),
str8_lit_comp("dr3"),
str8_lit_comp("dr4"),
str8_lit_comp("dr5"),
str8_lit_comp("dr6"),
str8_lit_comp("dr7"),
str8_lit_comp("fpr0"),
str8_lit_comp("fpr1"),
str8_lit_comp("fpr2"),
str8_lit_comp("fpr3"),
str8_lit_comp("fpr4"),
str8_lit_comp("fpr5"),
str8_lit_comp("fpr6"),
str8_lit_comp("fpr7"),
str8_lit_comp("st0"),
str8_lit_comp("st1"),
str8_lit_comp("st2"),
str8_lit_comp("st3"),
str8_lit_comp("st4"),
str8_lit_comp("st5"),
str8_lit_comp("st6"),
str8_lit_comp("st7"),
str8_lit_comp("fcw"),
str8_lit_comp("fsw"),
str8_lit_comp("ftw"),
str8_lit_comp("fop"),
str8_lit_comp("fcs"),
str8_lit_comp("fds"),
str8_lit_comp("fip"),
str8_lit_comp("fdp"),
str8_lit_comp("mxcsr"),
str8_lit_comp("mxcsr_mask"),
str8_lit_comp("ss"),
str8_lit_comp("cs"),
str8_lit_comp("ds"),
str8_lit_comp("es"),
str8_lit_comp("fs"),
str8_lit_comp("gs"),
str8_lit_comp("ymm0"),
str8_lit_comp("ymm1"),
str8_lit_comp("ymm2"),
str8_lit_comp("ymm3"),
str8_lit_comp("ymm4"),
str8_lit_comp("ymm5"),
str8_lit_comp("ymm6"),
str8_lit_comp("ymm7"),
};

String8 regs_g_alias_code_x86_string_table[36] =
{
str8_lit_comp(""),
str8_lit_comp("ax"),
str8_lit_comp("cx"),
str8_lit_comp("bx"),
str8_lit_comp("dx"),
str8_lit_comp("sp"),
str8_lit_comp("bp"),
str8_lit_comp("si"),
str8_lit_comp("di"),
str8_lit_comp("ip"),
str8_lit_comp("ah"),
str8_lit_comp("ch"),
str8_lit_comp("dh"),
str8_lit_comp("bh"),
str8_lit_comp("al"),
str8_lit_comp("cl"),
str8_lit_comp("dl"),
str8_lit_comp("bl"),
str8_lit_comp("bpl"),
str8_lit_comp("spl"),
str8_lit_comp("xmm0"),
str8_lit_comp("xmm1"),
str8_lit_comp("xmm2"),
str8_lit_comp("xmm3"),
str8_lit_comp("xmm4"),
str8_lit_comp("xmm5"),
str8_lit_comp("xmm6"),
str8_lit_comp("xmm7"),
str8_lit_comp("mm0"),
str8_lit_comp("mm1"),
str8_lit_comp("mm2"),
str8_lit_comp("mm3"),
str8_lit_comp("mm4"),
str8_lit_comp("mm5"),
str8_lit_comp("mm6"),
str8_lit_comp("mm7"),
};

REGS_Rng regs_g_reg_code_x86_rng_table[61] =
{
{0},
{(U16)OffsetOf(REGS_RegBlockX86, eax), 4},
{(U16)OffsetOf(REGS_RegBlockX86, ecx), 4},
{(U16)OffsetOf(REGS_RegBlockX86, edx), 4},
{(U16)OffsetOf(REGS_RegBlockX86, ebx), 4},
{(U16)OffsetOf(REGS_RegBlockX86, esp), 4},
{(U16)OffsetOf(REGS_RegBlockX86, ebp), 4},
{(U16)OffsetOf(REGS_RegBlockX86, esi), 4},
{(U16)OffsetOf(REGS_RegBlockX86, edi), 4},
{(U16)OffsetOf(REGS_RegBlockX86, fsbase), 4},
{(U16)OffsetOf(REGS_RegBlockX86, gsbase), 4},
{(U16)OffsetOf(REGS_RegBlockX86, eflags), 4},
{(U16)OffsetOf(REGS_RegBlockX86, eip), 4},
{(U16)OffsetOf(REGS_RegBlockX86, dr0), 4},
{(U16)OffsetOf(REGS_RegBlockX86, dr1), 4},
{(U16)OffsetOf(REGS_RegBlockX86, dr2), 4},
{(U16)OffsetOf(REGS_RegBlockX86, dr3), 4},
{(U16)OffsetOf(REGS_RegBlockX86, dr4), 4},
{(U16)OffsetOf(REGS_RegBlockX86, dr5), 4},
{(U16)OffsetOf(REGS_RegBlockX86, dr6), 4},
{(U16)OffsetOf(REGS_RegBlockX86, dr7), 4},
{(U16)OffsetOf(REGS_RegBlockX86, fpr0), 10},
{(U16)OffsetOf(REGS_RegBlockX86, fpr1), 10},
{(U16)OffsetOf(REGS_RegBlockX86, fpr2), 10},
{(U16)OffsetOf(REGS_RegBlockX86, fpr3), 10},
{(U16)OffsetOf(REGS_RegBlockX86, fpr4), 10},
{(U16)OffsetOf(REGS_RegBlockX86, fpr5), 10},
{(U16)OffsetOf(REGS_RegBlockX86, fpr6), 10},
{(U16)OffsetOf(REGS_RegBlockX86, fpr7), 10},
{(U16)OffsetOf(REGS_RegBlockX86, st0), 10},
{(U16)OffsetOf(REGS_RegBlockX86, st1), 10},
{(U16)OffsetOf(REGS_RegBlockX86, st2), 10},
{(U16)OffsetOf(REGS_RegBlockX86, st3), 10},
{(U16)OffsetOf(REGS_RegBlockX86, st4), 10},
{(U16)OffsetOf(REGS_RegBlockX86, st5), 10},
{(U16)OffsetOf(REGS_RegBlockX86, st6), 10},
{(U16)OffsetOf(REGS_RegBlockX86, st7), 10},
{(U16)OffsetOf(REGS_RegBlockX86, fcw), 2},
{(U16)OffsetOf(REGS_RegBlockX86, fsw), 2},
{(U16)OffsetOf(REGS_RegBlockX86, ftw), 2},
{(U16)OffsetOf(REGS_RegBlockX86, fop), 2},
{(U16)OffsetOf(REGS_RegBlockX86, fcs), 2},
{(U16)OffsetOf(REGS_RegBlockX86, fds), 2},
{(U16)OffsetOf(REGS_RegBlockX86, fip), 4},
{(U16)OffsetOf(REGS_RegBlockX86, fdp), 4},
{(U16)OffsetOf(REGS_RegBlockX86, mxcsr), 4},
{(U16)OffsetOf(REGS_RegBlockX86, mxcsr_mask), 4},
{(U16)OffsetOf(REGS_RegBlockX86, ss), 2},
{(U16)OffsetOf(REGS_RegBlockX86, cs), 2},
{(U16)OffsetOf(REGS_RegBlockX86, ds), 2},
{(U16)OffsetOf(REGS_RegBlockX86, es), 2},
{(U16)OffsetOf(REGS_RegBlockX86, fs), 2},
{(U16)OffsetOf(REGS_RegBlockX86, gs), 2},
{(U16)OffsetOf(REGS_RegBlockX86, ymm0), 32},
{(U16)OffsetOf(REGS_RegBlockX86, ymm1), 32},
{(U16)OffsetOf(REGS_RegBlockX86, ymm2), 32},
{(U16)OffsetOf(REGS_RegBlockX86, ymm3), 32},
{(U16)OffsetOf(REGS_RegBlockX86, ymm4), 32},
{(U16)OffsetOf(REGS_RegBlockX86, ymm5), 32},
{(U16)OffsetOf(REGS_RegBlockX86, ymm6), 32},
{(U16)OffsetOf(REGS_RegBlockX86, ymm7), 32},
};

REGS_Slice regs_g_alias_code_x86_slice_table[36] =
{
{0},
{REGS_RegCodeX86_eax, 0, 2},
{REGS_RegCodeX86_ecx, 0, 2},
{REGS_RegCodeX86_ebx, 0, 2},
{REGS_RegCodeX86_edx, 0, 2},
{REGS_RegCodeX86_esp, 0, 2},
{REGS_RegCodeX86_ebp, 0, 2},
{REGS_RegCodeX86_esi, 0, 2},
{REGS_RegCodeX86_edi, 0, 2},
{REGS_RegCodeX86_eip, 0, 2},
{REGS_RegCodeX86_eax, 1, 1},
{REGS_RegCodeX86_ecx, 1, 1},
{REGS_RegCodeX86_edx, 1, 1},
{REGS_RegCodeX86_ebx, 1, 1},
{REGS_RegCodeX86_eax, 0, 1},
{REGS_RegCodeX86_ecx, 0, 1},
{REGS_RegCodeX86_edx, 0, 1},
{REGS_RegCodeX86_ebx, 0, 1},
{REGS_RegCodeX86_ebp, 0, 1},
{REGS_RegCodeX86_esp, 0, 1},
{REGS_RegCodeX86_ymm0, 0, 16},
{REGS_RegCodeX86_ymm1, 0, 16},
{REGS_RegCodeX86_ymm2, 0, 16},
{REGS_RegCodeX86_ymm3, 0, 16},
{REGS_RegCodeX86_ymm4, 0, 16},
{REGS_RegCodeX86_ymm5, 0, 16},
{REGS_RegCodeX86_ymm6, 0, 16},
{REGS_RegCodeX86_ymm7, 0, 16},
{REGS_RegCodeX86_fpr0, 0, 8},
{REGS_RegCodeX86_fpr1, 0, 8},
{REGS_RegCodeX86_fpr2, 0, 8},
{REGS_RegCodeX86_fpr3, 0, 8},
{REGS_RegCodeX86_fpr4, 0, 8},
{REGS_RegCodeX86_fpr5, 0, 8},
{REGS_RegCodeX86_fpr6, 0, 8},
{REGS_RegCodeX86_fpr7, 0, 8},
};

C_LINKAGE_END

