// using single *ptr (with *) we can manipulate several 
// variables of the same type at once

#include <iostream>
using namespace std;

int main(){
    int x = 16;
    int y =32;
    int z=64;
    int *ptr; // pointer variable to an inteer
    ptr= &x; // now we store the address of x in ptr variable
    cout << "Integer variable content: "<< x<< " " << y<< " "<< z<< endl;
    ptr =&x; // now we store the address of x in ptr variable
    *ptr +=5; // here we access and change the value already stored at that address
    ptr = &y;
    *ptr += 5;
    ptr =&z;
    *ptr +=5;
    cout << "Integer variable content: "<< x<< " "<< y<< " "<< z<< endl;

    return 0;
}