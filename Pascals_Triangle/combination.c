#include "combination.h"

long long combination(long long n, long long r)
{
    long long c;
    c = fact(n) / (fact(r) * fact(n - r));
    return c;
}
