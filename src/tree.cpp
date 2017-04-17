#include "tree.h"

Tree::Tree(vector< vector<int> > data) {
  
}

string Tree::plot() {
  return "a";
}

double Tree::entropy(int p, int n) {
  double positive = p/(double)(p+n);
  double negative = n/(double)(p+n);
  double result1 =  - positive * log2(positive);
  double result2 =  - negative * log2(negative);
  cout << result1 << endl;
  cout << result2 << endl;
  return result1;
}

double Tree::infoGain(vector<int> data, vector<int> result) {
 
  int p = pResults(result);
  int n = result.size() - p;
  int p0 = remOutcome(1, 0, data, result);
  int p1 = remOutcome(1, 1, data, result);
  int n0 = remOutcome(0, 0, data, result);
  int n1 = remOutcome(0, 1, data, result);
  
  double remainder = (p0+n0)*entropy(p0, n0)/(p+n) + (p1+n1)*entropy(p1, n1)/(p+n);
  double gain = entropy(p, n);
  return gain - remainder;
}

// Calculates number of positive results
int Tree::pResults(vector<int> data) {
  int counter = 0;
  for (int i=0; i<data.size(); i++) {
    if (data[i] == 1) {
      counter++;
    }
  }
  return counter;
}

// Calculates p0, p1, n0, n1
int Tree::remOutcome(int attribute, int outcome, vector<int> data, vector<int> result) {
  int counter = 0;
  for (int i=0; i<data.size(); i++) {
    if (data[i] == attribute && result[i] == outcome) {
      counter++;
    }
  }
  return counter;
}
