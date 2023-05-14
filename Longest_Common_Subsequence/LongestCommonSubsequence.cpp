#include "LongestCommonSubsequence.h"
#include <cstring>

int longestCommonSubsequence(std::string s1, std::string s2, std::string s3, int m, int n, int o, int cache[101][101][101])
{
  if (m == 0 || n == 0 || o == 0)
  {
    return 0;
  }
  if (cache[m][n][o] >= 0)
  {
    return cache[m][n][o];
  }
  if (s1[m - 1] == s2[n - 1] && s2[n - 1] == s3[o - 1])
  {
    return 1 + longestCommonSubsequence(s1, s2, s3, m - 1, n - 1, o - 1, cache);
  }
  cache[m][n][o] = std::max(longestCommonSubsequence(s1, s2, s3, m - 1, n, o, cache), std::max(longestCommonSubsequence(s1, s2, s3, m, n - 1, o, cache), longestCommonSubsequence(s1, s2, s3, m, n, o - 1, cache)));
  return cache[m][n][o];
}

int longestCommonSubsequence(std::string s1, std::string s2, std::string s3, int m, int n, int o)
{
  int cache[101][101][101];
  std::memset(cache, -1, sizeof(cache));
  return longestCommonSubsequence(s1, s2, s3, m, n, o, cache);
}
