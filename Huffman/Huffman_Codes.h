#ifndef HUFFMAN_CODES_H
#define HUFFMAN_CODES_H

#include <string>
#include <vector>

class Huffman_Codes
{
  struct New_Node
  {
    char data;
    size_t freq;
    New_Node *left;
    New_Node *right;
    New_Node(char data, size_t freq);
    ~New_Node();
  };

  struct compare
  {
    bool operator()(New_Node *l, New_Node *r);
  };

  New_Node *top;

  void print_Code(New_Node *root, std::string str);

public:
  Huffman_Codes();
  ~Huffman_Codes();
  void Generate_Huffman_tree(std::vector<char> &data, std::vector<size_t> &freq, size_t size);
};

#endif
