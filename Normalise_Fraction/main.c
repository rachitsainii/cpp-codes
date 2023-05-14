// main.c

#include "fraction.h"
#include <stdio.h>

int main()
{
    int frac1[2] = {};
    printf("Enter numerator and denominator of the fraction: ");
    scanf("%d %d", &frac1[0], &frac1[1]);

    reduce_fraction(frac1);

    return 0;
}
