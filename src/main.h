#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

#include "tree.h"

using namespace std;

vector< vector<int> > getData(int clean);
vector<int> getResult(int clean);
vector<int> filterTarget(int target, vector<int> data);
