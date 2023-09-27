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
int onebitParity(int);
int test_onebitParity(int);
int checkSubstraction(int, int);
int test_checkSubstraction(int, int);
int twoscom2SignedVal(int);
int test_twoscom2SignedVal(int);
int nibbleReverse(int);
int test_nibbleReverse(int);
int bitFilter(int, int, int);
int test_bitFilter(int, int, int);
int addAndDivideBy4(int, int);
int test_addAndDivideBy4(int, int);
int numZerosFirst(int);
int test_numZerosFirst(int);
unsigned absFloat(unsigned);
unsigned test_absFloat(unsigned);
int castFloat2Int(unsigned);
int test_castFloat2Int(unsigned);
int compareFloat(unsigned, unsigned);
int test_compareFloat(unsigned, unsigned);
