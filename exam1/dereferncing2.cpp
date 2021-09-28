//illustration of dereferencing operator * continued 
#include <iostream>
using namespace std;

int main(){
    int x= 16;
    int *ptr; // int indicates the datat type stored, the * indicates that ptr is a pointer variable to an integer
    ptr= &x;// now we store the address of x in ptr variable

    // we can now access x in two ways:
    cout <<"The value of x is: "<< x<< endl;
    cout << "The value of x is: "<< *ptr<< endl;// here we use the dereferencing operator (*)
    cout << "--------------"<< endl;
    *ptr=32; // assigning 32 to the location (address) that ptr poitns to and repeating the cout statement
    cout << "the val of x: "<< x<< endl;
    cout << "the (address) of x is: "<< *ptr << endl;// here we use the dereferncing operator *

    return 0;
}