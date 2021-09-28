// Demonstating how to allocate arrays in c++
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the array dimension: "<< endl;
    cin >> n;

    double a[n];
    /*
        Here we are going to be creating the values that are going to be in 
        the array. We will start on zero and go up to the nth value. 
    */
    for(int i=0; i<n; i++){
        // we store the values on the var i
        a[i]= double(i); // because the array holds doubles
        // we convert the integer variable i to a double
    }
    // we will print the values that were created 
    for(int i=0; i<n; i++){
        cout << "  a["<<i<< "] = "<< a[i]<< endl;
    }
    cout << "-----------------"<< endl;

}
