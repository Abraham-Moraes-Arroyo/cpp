#include <iostream>
#include <string>
#include <cmath>
 
using namespace std;

class Cylinder {
    private radius;
    double height;
    friend string show(Cylinder); // displays the cylinder properties
    friend double getBaseArea(Cylinder); // takes Cylinder object to input 
};

Cylinder(double r=0, double h=0); // declaring the 
// constructor; values must be intialized for operator 
// overloading to work:
    double pi