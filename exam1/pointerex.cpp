// illustration of poitner (variable) declaration and basic use

#include <iostream>
using namespace std;

int main(){
    int x=16;
    int *ptr; // int indicates the data type stored, the *ptr is a pointer variable to an integer
    ptr =&x;// now we store the adress of x in ptr variab;e

    cout << "The value of x is: "<< x<< endl;
    cout << "The address location of x in memory is: "<< ptr << endl;
    //displayed in hexadecimal notation
}