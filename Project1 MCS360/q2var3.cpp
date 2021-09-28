//main goal of this is to make a call by reference 
#include <iostream>
using namespace std;
// functions that I need
int modifier(int *Array[5][2]){
    // to store the array
    int z;
    z= *Array[5][2];
    cout << "z is: "<< *z<< endl;
  }
void show(){
    cout << "this is working";
}
/*make a function that will take the left side of the 
array and store it to a var, so we can then compare the 
first array to the second array in the modifier function*/
int main(){
    // what I have been given 
    int Array[5][2]={{9,6},{1,2},{8,3},{7,5},{4,2}};
    cout<< modifier(&Array[5][2]);

    return 0;
}