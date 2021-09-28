// make die rolling simulation where you 
// return an integer using a class called Roll()
#include <iostream>
using namespace std;
class Roll{
    public:
    int randomNum(){return 1+(rand()%6);} 
    /* setting the range from 1-7, because 
    the range actually stops at 6, but we want 
    the 6 since this is a 6 sided die not a 7
    sided one
    */
};
int main(){
    Roll myObj; // creates an object of the class
    cout << "This is a die roll simulation\n here is your num\n";
    for(int i=0; i<5; i++){
        cout << myObj.randomNum()<< endl;
    }
    cout << myObj.randomNum();
    return 0;
}