/*
This is the variation where instead of using a class
I used a bool function in order to get simulate the 
toss of a coin, where 1 means heads and 0 means 
tails.
*/
using namespace std;
#include <iostream>
bool Toss(){
    return rand()%2;
};

int main(){

    for(int i=0; i<5; i++){
        cout << Toss()<< endl;
    }
    return 0;
}