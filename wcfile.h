#include <stdio.h>
#include <stdlib.h>

#ifndef CH_HEAD
#define CH_HEAD

// solve function reasd equations from a file and writes them in a solved state to another file

// param qfile: file with math questions to solve
// param afile: file to write equations with answers in
// example:
//   qfile at start of function:
//     12 + 13
//     24 / 5
//     8 * 234
//     65 - 78
//     239 % 13
//   afile after function:
//      12 +  13 = 25
//      24 /   5 = 4
//       8 * 234 = 1872
//      65 -  78 = -13
//     239 %  13 = 5
void solve(const char* qfile, const char* afile);

#endif
