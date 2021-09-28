#include <iostream>
#include <cstdlib>// needed for the exit function
#include <string>
using namespace std;

// declaring a Rectangle class

class Rectange{
// we have two sets of methods, private and publc
// private methods can only be accessed inside the class
private:
    double length;// there are two (private) class members and 
        // can only be accessed byt the functions in the class definition 
        //not in the main function directly

    double width;

public:
// all methods are declared inside the class but defined outside the class
// but defined outside the class and linked via scope resolution

// the next item is called a constructor; a constructor is a member which is
// automatically called any time a class object is created.
// think of a constructor as an intilization proceudre.
// they are used to perform number vairable initilization and other setup operations
// when not explicity defiend, compiler will create a most basic, default constructor,
// and apply it we will use it to initilize rectangle objects to declaration
// Rectangle(double, double); // declaring the constructor

};

