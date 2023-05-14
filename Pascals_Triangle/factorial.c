#include "factorial.h"

long long fact(long long num)
{
    long long factorial = 1;
    while (num > 0)
    {
        factorial = factorial * num;
        num--;
    }

    if (num == 0)
    {
        return factorial;
    }
}
