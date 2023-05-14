#include <stdio.h>
#include "combination.h"

void main()
{
    int lines;
    printf("Enter number of lines in the triangle: ");
    scanf("%d", &lines);

    for (int i = 0; i <= lines; i++)
    {
        printf("  ");
    }

    if (lines >= 1)
        printf(" 1\n");

    for (int i = 1; i < lines; i++)
    {
        long temp = 0;
        for (int s = 0; s < lines - i; s++)
        {
            printf("  ");
        }
        while (temp <= i)
        {
            printf("% 4lld", combination(i, temp));
            temp++;
        }
        printf("\n");
    }
}
