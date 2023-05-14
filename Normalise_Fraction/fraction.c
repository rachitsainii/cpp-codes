// fraction.c

#include "fraction.h"
#include <stdlib.h>
#include <stdio.h>

void reduce_fraction(int* frac)
{
    if (frac[1] == 0)
    {
        printf("Error: Invalid fraction!");
        exit(0);
    }

    if (frac[0] == 0)
    {
        printf("Normalised fraction: 0");
        exit(0);
    }

    for (int i = abs(frac[1]); i > 0; i--)
    {
        if ((frac[0] < 0 && frac[1] < 0) || (frac[0] > 0 && frac[1] < 0))
        {
            frac[0] = -frac[0];
            frac[1] = -frac[1];
        }

        if (frac[0] % i == 0 && frac[1] % i == 0)
        {
            frac[0] = frac[0] / i;
            frac[1] = frac[1] / i;
        }
    }

    if (frac[1] == 1)
    {
        printf("Normalised fraction: %d", frac[0]);
        exit(0);
    }

    printf("Normalised fraction: %d/%d\n", frac[0], frac[1]);
}
