/*
The derfernecing operator (indirection operator)
-when we declare a variable x and pointer variable *ptr and assign ptr 
the adress of x, i.e. ptr =&x;
usign just ptr (wihtout *) gives us the address, in hexadecimal
format, of the variable x
using *ptr (with *) gives us the actual value the variable x

*/
#include <iostream>
using namespace std;
int main(){
    int x =16;
    int *ptr; // int indicates the data type stored, the * indicates that ptr is a pointer variable to an integer
    ptr = &x;// how we store the address of x in ptr variable 

    // we cna now access x in two ways
    cout << "The valye of x is: "<< x<< endl;
    cout << "The value of x is: "<< *ptr<< endl;// here we us the dereferencing operator *
    cout << "The (addres) value of x is: "<< ptr<< endl;
    //here we don't use th dereferencing operator *, and get the address
    
    return 0;
}