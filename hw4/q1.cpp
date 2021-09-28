#include <iostream>
using namespace std;


class Toss{
    public:
    int randomNum(){return rand()%2;}// the attirbute (int var)
};

int main(){
    Toss myObj; // creates an object of the class
    /* coin toss simulation
    where the 1 means heads and tails means false 
    this is the functions I am still working in the 
    class
    */

    cout << "Here we are going to flip a coin 5 times"<< endl;
    cout << "1 means heads, 0 means tails, are you ready? "<< endl;
   // printing the attribute values
   for(int i=0; i<5; i++){
        cout << myObj.randomNum()<< endl;
    }
    cout << "here are another 5"<< endl;
    for(int i=0; i<5; i++){
        cout << myObj.randomNum()<< endl;
    }
    cout << "here are another 5"<< endl;
    return 0;
}