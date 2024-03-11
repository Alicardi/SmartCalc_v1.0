#ifndef CREDIT_H
#define CREDIT_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *CalculateAnnuityCredit(long double sum, long double percent, int date);
char *CalculateDifferentiatedCredit(long double sum, long double percent,
                                    int date);

#endif  // CREDIT_H
