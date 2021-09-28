/*
Array is a pointer in c++
we have already learned that an array variable, without 
breackets and subscripts, represents the starting address
of the array
*/

#include <iostream>
using namespace std;
int main(){

    int A[6]= {2,4,8,16,36,64};
    //accessign the first element of A
    cout << *A<< endl; // without brackets and subscripts, 
    // A represents the starting address of the array
    for(int i=0; i<6; i++){// accesign all elements
        cout << A[i]<< endl;
    }
    // using pointer notation, we can iterate ove an array 
    // as well 
    // in particular, A[i] is teh smae as *(A+i)
    for(int i=0; i<6; i++){
        cout << (A+i)<< endl;
    }

    // we can iterate over the addresses as well; note the
    // jump by 4 untis in the hexadecimal notation of the
    // address
    for (int i=0; i<6;i++){
        cout <<(A+i)<< endl;
    }
    return 0;
}