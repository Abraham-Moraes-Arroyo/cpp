#include <iostream>
using namespace std;
// how will you get the first element of a 2-array and create and array and pass it to the function that will
// print out the first array

void F(int *ptr, int n){
    // what should you write here:
    cout << ptr[0] << endl;
}

void G(int *ptr, int n){
    
}


int main(){
    int x =3;
    int A[3]={2,4,8};
    int B[][2]={{9,6},{1,2},{4,8}};
    F(A, 3);
    G(&B[0][0]);
    return 0;
}