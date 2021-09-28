#include <iostream>
using namespace std;
/*
write a progmra that prompts the user to enter the radius of a cirlce and prints to screen the area of
the circle with a message, in format: 
The radius is "computed value"
*/
int main(){
    const float PI= 3.14;
    float radius;
    float area;
    cout << "enter the radius of the circle: " << endl;
    cin >> radius;

    area= (radius)*(radius)*PI;
    cout <<area << "is computed value" << endl;
    return 0;
}