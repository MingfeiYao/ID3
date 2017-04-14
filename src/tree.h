
#ifndef _Tree
#define _Tree

#include <vector>
#include <string>

using namespace std;

class Tree {
  public:
    int label;
    Tree* leftChild;
    Tree* rightChild;
    Tree(vector< vector<int> > data);
    string plot();
};

string plot(Tree data);

#endif /*_Tree*/
