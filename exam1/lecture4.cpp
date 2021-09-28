// Demonstating how to allocate arrays in c++
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the array dimension: "<< endl;
    cin >> n;

    double a[n];
    for(int i=0; i<n; i++){
        a[i]= double(i); // because the array holds doubles
        // we convert the integer variable i to a double
    }
    for(int i=0; i<n; i++){
        cout << "  a["<<i<< "] = "<< a[i]<< endl;
    }
    cout << "-----------------"<< endl;

}
