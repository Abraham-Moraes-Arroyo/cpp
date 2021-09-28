#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>
int main(){
    /*Define an integer variables x =10 and y=-4. Using the cmath library, print to 
    screen the results of the followign values, 
    sqrt(abs(y)) , exp(x), log(x), tan(x), cos(pi*y)*/
    const float pi = 3.14;
    int x=10;
    float  y=-4;

    cout<< sqrt(abs(y))<< endl;
    cout<<exp(x)<< endl;
    cout<< tan(x) << endl;
    cout << cos(pi*y) << endl;


    return 0;
}