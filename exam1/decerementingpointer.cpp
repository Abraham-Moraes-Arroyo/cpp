// Decrementing a pointer Variable

#include <iostream>
using namespace std;

int main(){
    const int N=6;
    int A[N]= {2,4,8,16,32,64};
    int *ptr;

    /* here we want to make the ptr point to the last
     element in the array (i.e. address location of 
    last element) and then move the poitner to the
    first locaiton in the array, printing the address 
    and stored values
    */
   ptr= &A[N-1];// if we wanted the poitner to point 
    //to the first element in the array we would 
    // siply ptr=A

    // but we want to et ptr poitn to the address of the 
    // last element 
    for (int i= N-1; i>=0; i--){
        cout <<"Address of A[ "<< i << "] is ";
        cout << ptr<< endl;

        cout << "Value of A[" << i << "] is ";
        cout << *ptr<< endl;
        
        --ptr;// decrement the poitner to point to
        // the next location in memory
    }
}