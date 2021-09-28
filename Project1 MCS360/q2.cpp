// this is the second problem 
/*
    As an exmaple, consider a 2D array of the form {{9,6}, {1,2}, {8,3}
    {7,5}, {4,2}}. Write a cpp function which takes an arbitrary 2D array 
    A of the same form as in the example and modifies the entreis of the
    array, such that the vlaues in the subarrays are sorted. That is,
    the function would modify the array in the example such that it becomes 
    {{6,9},{1,2},{5,7},{2,4}}. Note that you are asked to modify the original
    array! you are no asked to create a copy fo the array, sort it, and 
    then return the array. 

    the 2d array will always consist of sub-arrays, containing exactly two 
    intgers but there can be an arbitrary number of sub-arrays, not 
    necessarily five, as in the example above.

    the funtion which modifies the array should be called modifier. the 
    modifier function should take on input the array (hint: pointers),
    and the size (the number of sub-arrays) of the array as an integer.
    in addiition, write a function called show, which is capable of printing
    a 2d array exactyl as given in the example, along with curly 
    brackets { and }
*/
#include <iostream>
using namespace std;
void modifier(){
  }
void show(int *Array[5][2]){
  //int Array[5][2]={{9,6},{1,2},{8,3},{7,5},{4,2}};
  for(int i=0; i<5; i++){
    /*
      Here I am going to take the left side
      of the array so I can then later compare 
      it to the right side of the array
    */
   cout << *Array[i]<< endl;
   
    
  }
  cout << "this is where the changes to the array is going to be done";

}

int main(){
  /*Not sure if we are given an array already, and if we are given an 
  */
  int Array[5][2]={{9,6},{1,2},{8,3},{7,5},{4,2}};
  //show();
  
    return 0;
}