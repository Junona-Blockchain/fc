#pragma once

//optimizations that any compiler we target have
#define HAVE_BUILTIN_CLZLL 1
#define HAVE_BUILTIN_EXPECT 1
#define HAVE___INT128 1

//use internal field & num impls
#define USE_FIELD_INV_BUILTIN 1
#define USE_SCALAR_INV_BUILTIN 1
#define USE_NUM_NONE 1

//use impls best for 64-bit
#define USE_FIELD_5X52 1
#define USE_SCALAR_4X64 1

//enable asm
#ifdef __x86_64__
  #define USE_ASM_X86_64 1
#endif
