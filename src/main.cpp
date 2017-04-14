#include "main.h"

int main(int argc, char* argv[]) {

  cout << "ID3 Decision Tree \n";
  // Loading clean data
  vector< vector<int> > cleanData = getData(1);
  cout << "Clean data loaded ... " << endl;
  
  // Loading noisy data
  vector< vector<int> > noisyData = getData(0);
  cout << "Noisy data loaded ... " << endl;

}

vector< vector<int> > getData(int clean) {
  vector< vector<int> > result;
  string file = clean ? "data/cleandata.csv" : "data/noisydata.csv";
  
  fstream dataStream(file);
  string row;
  while (getline(dataStream, row)) {
    // split row on comma
    stringstream ss(row);
    int i;
    vector<int> rowData;
    while (ss >> i) {
      rowData.push_back(i);
      if (ss.peek() == ',') {
        ss.ignore();
      }
    }
    result.push_back(rowData);
  }

  return result;
}

// Retreive result data
vector<int> getResult(int clean) {
 
  vector<int> result;

  string file = clean ? "cleandata_result.csv" : "noisydata_result.csv";
  fstream resultStream(file);
  string row;
  getline(resultStream, row);
  stringstream ss(row);
  int i;

  while (ss >> i) {
    result.push_back(i);
    if (ss.peek() == ',') {
      ss.ignore();
    }
  }

  return result;
}

vector<int> filterTarget(int target, vector<int> data) {
  vector<int> result;
  for (int i=0; i<data.size(); i++) {
    if (data[i] == target) {
      result.push_back(1);
    } else {
      result.push_back(0);
    }
  }
  return result;
}
