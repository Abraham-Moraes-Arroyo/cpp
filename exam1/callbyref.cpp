/*
    with the call by constnat reference, a refernece to the
    argument object is passed to the function. If the function 
    modifies the parameter value, this modification is made 
    to the original object named by the argument
*/
#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int z;
    z=*x;
    *x=*y;
    *y=z;
    cout << "x= "<< *x<< endl;
    cout << "y= "<< *y<< endl;
}

int main(){
    int a =5;
    int b =10;

    // the call by constant reference
    swap(&a, &b);// exchanges the two values at their address with 
                 // each other
    cout << "a= "<< a<< endl;
    cout <<"b= "<< b<< endl;
    /*
        because the values at the addresses have been changed, a and 
        b have been permanetly altered. i.e. no copies were
        created/ changed with but values directly stored at those addresses
        consequently, the values were permanetly swapped.
    */

   return 0;

   /*
    Originally the a was 5 and the b was a 10. 
    however, when we did the swap we physically called
    the integers from the variables by using poitners. 
   */
}