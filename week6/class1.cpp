#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
  vector<int> v{7,3,8,6,0,4,5,2,7};
  //cout << v.size()<< endl;
 // cout << v.capacity()<<endl;// vecotr of size 9, because there are 9 numbers, we can change this by 
  // adding more numbers to the array

  //cout << v.at(3)<< endl; // we count at 0 so essinitally it is 2

  // v.pop_back();
  // for(auto x:v) cout << x<< " "; cout << endl;// the last 7 was removed

  // v.push_back(2);
  // for (auto x:v) cout << x<< " "; cout << endl;// we will now have a 2 at the end of the list

  // v.erase(v.begin()+4); // we set where we are going to start in the array
  // for(auto x:v) cout << x << " ";  cout << endl;// it has removed whatever was in index location 4
  // // in this case the 0 was removed

  // v.insert(v.begin()+4,9);// here we at position 4 we are going to add the number 9 
  // for(auto x:v) cout << x<< " "; cout << endl; 
  // return 0;

  v.erase(remove(v.begin(), v.end(),7), v.end());// we are going to erase the numbers that are val 7
  for(auto x: v) cout << x<< " "; cout << endl;
}