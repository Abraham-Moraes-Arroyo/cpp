//Iterating over Arrays with poitners directly
// we cna use a pointer to iterate through an array directly

#include <iostream>
using namespace std;

int main(){
    int A[6]= {2,4,8,16,36,64};
    int *ptr;

    ptr=A; // start the poiting to the A array

    // front to back
    for (int i=0; i<6; i++){
        cout << *ptr<< endl;
        ptr++;
    }
    //because ptr is an integer poitner, increment
    // operator adds the size of one int to it, 
    // and so it ends up pointing to the next element

    // back to back
    for (int i=0; i<6; i++){
        ptr--;
        cout << *ptr << endl;
    }
    return 0;
}