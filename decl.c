#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define TMin INT_MIN
#define TMax INT_MAX

#include "btest.h"
#include "bits.h"

test_rec test_set[] = {
/* Copyright (C) 1991-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */
/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
/* wchar_t uses Unicode 10.0.0.  Version 10.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2017, fifth edition, plus
   the following additions from Amendment 1 to the fifth edition:
   - 56 emoji characters
   - 285 hentaigana
   - 3 additional Zanabazar Square characters */
 {"onebitParity", (funct_t) onebitParity, (funct_t) test_onebitParity, 1, "& ^ << >>", 20, 1,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"checkSubstraction", (funct_t) checkSubstraction, (funct_t) test_checkSubstraction, 2,
    "! ~ & ^ | + << >>", 20, 1,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"twoscom2SignedVal", (funct_t) twoscom2SignedVal, (funct_t) test_twoscom2SignedVal, 1, "! ~ & ^ | + << >>", 15, 1,
  {{TMin+1, TMax},{TMin+1,TMax},{TMin+1,TMax}}},
{"nibbleReverse", (funct_t) nibbleReverse, (funct_t) test_nibbleReverse, 1, "! ~ & ^ | + << >>", 25, 1,
 {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"bitFilter", (funct_t) bitFilter, (funct_t) test_bitFilter, 3,
    "& | << >>", 20, 1,
  {{TMin,TMax},{0, 31},{0,31}}},
 {"addAndDivideBy4", (funct_t) addAndDivideBy4, (funct_t) test_addAndDivideBy4, 2,
    "! ~ & ^ | + << >>", 20, 1,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"numZerosFirst", (funct_t) numZerosFirst, (funct_t) test_numZerosFirst, 1, "! ~ & ^ | + << >>", 50, 1,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"absFloat", (funct_t) absFloat, (funct_t) test_absFloat, 1,
    "$", 10, 1,
     {{1, 1},{1,1},{1,1}}},
 {"castFloat2Int", (funct_t) castFloat2Int, (funct_t) test_castFloat2Int, 1,
    "$", 30, 1,
     {{1, 1},{1,1},{1,1}}},
 {"compareFloat", (funct_t) compareFloat, (funct_t) test_compareFloat, 2,
    "$", 30, 1,
     {{1, 1},{1,1},{1,1}}},
  {"", NULL, NULL, 0, "", 0, 0,
   {{0, 0},{0,0},{0,0}}}
};
