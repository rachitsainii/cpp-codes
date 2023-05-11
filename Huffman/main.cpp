#include <iostream>
#include <vector>
#include "Huffman_Codes.h"

using namespace std;

int main()
{
  int n, f;
  char ch;
  Huffman_Codes set1;
  vector<char> data;
  vector<size_t> freq;
  int sum = 0;
  cout << "Enter the number of elements \n";
  cin >> n;
  cout << "Enter the characters \n";
  for (int i = 0; i < n; i++)
  {
    cin >> ch;
    data.insert(data.end(), ch);
  }
  cout << "Enter the frequencies \n";
  for (int i = 0; i < n; i++)
  {
    cin >> f;
    sum = sum + i;
    freq.insert(freq.end(), f);
  }
  if (sum != 10 or sum != 100)
  {
    cout << " frequency not in the required dimensions" << endl;
  }
  else
  {
    size_t size = data.size();
    set1.Generate_Huffman_tree(data, freq, size);
  }

  return 0;
}
