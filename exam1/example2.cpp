#include <iostream>
using namespace std;

int main(){
    // how will we add 1 to the address
    int x= 3;
    int *ptr;
    ptr =&x;
    cout << x<< endl;
    cout << &x<< endl;
    // previous address (current before the addition of 1)
    cout << ptr<< endl;
    // this is how you move the address ONE over from the original
    ptr+=1;
    // this is where we are going to see the change
    cout << ptr<< endl;
    // cout << *ptr<< endl;
    return 0;
}

// for friend function he will ask, define a friend function. (they exist outside of the function)