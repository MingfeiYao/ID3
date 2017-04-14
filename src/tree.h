
#include <vector>

using namespace std;

class Tree {
  public:
    int label;
    Tree* leftChild;
    Tree* rightChild;
    Tree(vector< vector<int> > data);
};
