#include <iostream>
#include <string>
#include "LongestCommonSubsequence.h"

int main()
{
    std::string s1, s2, s3;
    std::cin >> s1 >> s2 >> s3;

    int m = s1.length();
    int n = s2.length();
    int o = s3.length();

    std::cout << longestCommonSubsequence(s1, s2, s3, m, n, o);
    return 0;
}
