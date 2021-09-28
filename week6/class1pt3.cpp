
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> add_5(vector<int> v){
  vector<int> w(v.size());
  for(int i=0; i<w.size(); i++){
    w[i]=v[i]+5;
  }
  return w;
}
int main() {

// incrementing the elements of the list by 5
vector<int> v{1,2,3,4,5,6};
vector<int> z;

z= add_5(v);
for(auto x: z) cout << x<< " "; cout << endl;

  return 0;
}

  // have it in the main function
  // will print the array nicely
  // vector<vector<int>> M{{1,2,3},{4,5,6},{7,8,9}};
  // for(int i=0; i< M.size(); i++){

  //   for(int j=0; j<M[i].size(); j++){
  //     cout << M[i][j]<< " ";
  //   }
  //   cout << endl;
  // } 
