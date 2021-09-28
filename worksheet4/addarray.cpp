#include <iostream>
using namespace std;

int addArrays(int *Array , int n){   
    int total=0;
    for (int i=0; i<n; i++){
        total += Array[i];
    }
    cout << total;
    return 0;

}

int main(){
    const int n =10;// this is the amount of elements in the array Array
    int Array[10]={1,2,3,4,5,6,7,8,9,10};
    addArrays(&Array[0], 10);// we choose zero because that is the position that the array starts at
    return 0;
}