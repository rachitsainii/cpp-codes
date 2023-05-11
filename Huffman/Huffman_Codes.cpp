#include "Huffman_Codes.h"
#include <iostream>
#include <queue>

using namespace std;

Huffman_Codes::New_Node::New_Node(char data, size_t freq) : data(data),
                                                            freq(freq),
                                                            left(NULL),
                                                            right(NULL)
{
}

Huffman_Codes::New_Node::~New_Node()
{
  delete left;
  delete right;
}

bool Huffman_Codes::compare::operator()(New_Node *l, New_Node *r)
{
  return (l->freq > r->freq);
}

Huffman_Codes::Huffman_Codes() {}

Huffman_Codes::~Huffman_Codes()
{
  delete top;
}

void Huffman_Codes::Generate_Huffman_tree(vector<char> &data, vector<size_t> &freq, size_t size)
{
  New_Node *left;
  New_Node *right;
  priority_queue<New_Node *, vector<New_Node *>, compare> minHeap;

  for (size_t i = 0; i < size; ++i)
  {
    minHeap.push(new New_Node(data[i], freq[i]));
  }

  while (minHeap.size() != 1)
  {
    left = minHeap.top();
    minHeap.pop();

    right = minHeap.top();
    minHeap.pop();

    top = new New_Node('$', left->freq + right->freq);
    top->left = left;
    top->right = right;
    minHeap.push(top);
  }
  print_Code(minHeap.top(), "");
}

void Huffman_Codes::print_Code(New_Node *root, string str)
{
  if (root == NULL)
    return;

  if (root->data == '$')
  {
    print_Code(root->left, str + "0");
    print_Code(root->right, str + "1");
  }

  if (root->data != '$')
  {
    cout << root->data << " : " << str << "\n";
    print_Code(root->left, str + "0");
    print_Code(root->right, str + "1");
  }
}
