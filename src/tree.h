
#ifndef Tree_H
#define Tree_H

#include <vector>
#include <string>
#include <math.h>
#include <iostream>

using namespace std;

class Tree {
  public:
    int label;
    Tree* leftChild;
    Tree* rightChild;
    Tree(vector< vector<int> > data);
    string plot();
//  private:
    double entropy(int p, int n);
    double infoGain(vector<int> data, vector<int> result);
    int pResults(vector<int> data);
    int remOutcome(int attribute, int outcome, vector<int> data, vector<int> result);
};

string plot(Tree data);
double entropy(vector<int> data, vector<int> result);

#endif // Tree_H
