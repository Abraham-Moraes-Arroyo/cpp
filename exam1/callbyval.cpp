// call by value example:
using namespace std;
#include <iostream>
/*
the arguments value, a copy of the object named 
by the argument- is passed ot the funciton, so that
even if the funciton modifies the parameter value, 
the modification will not remain affter the return from 
the function
*/
void swap(int x, int y){
    /*
        Here x represents a, and the y represents the b
        we needed to use int for both of them because we 
        need to explain that they are ints and not floats 
        or what not. We then create an z variable as a 
        placeholder so we can throw x in there and then make the
        swap with the int y, or in our case b
    */
    int z;
    z=x;
    x=y;
    y=z;
    cout << "x= "<< x<< endl;
    cout << "y= "<< y << endl;

}

int main(){
    int a =5;
    int b =10;
    // the vall by value example:
    swap(a, b);// exchanges the two values with each other
    cout << "a= "<< a<< endl;
    cout << "b= " << b << endl;
    // note how, despite the change, a and b remain unchanged
    // because a copy of a and b had been created adn then 
    // they were swapped

    return 0;
}