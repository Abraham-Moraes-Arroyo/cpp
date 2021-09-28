/*
C++ programmer can use function to define a group of staments that
perform a particular operations. The statements beginning with
keyword return cause an exit from the function; the expression
following return is the function result 

In order for the compiler to compile a function call, it must first 
see a declaration of that function. The declaration of a function
specifies the name, return type, and parameter types of a function
*/

/*
    In this program we create an on-going menu, which keeps 
    offering the user the choice of selecting a specific computation,
    1. Circle Area Computation
    2. Rectangle Area Computation
    3. Quit program 
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Declaring function prototype -i.e. functiosn involved in this 
// program other than main funciton
// double area_of_circle (double);// input argument is radius of 
// type double
// double area_of_rectangle(double, double); // input arguments 
// area sides of the rectangle of type doubles 
// bool is_square(double, double) // functions returns boolean type true/ false

double area_of_circle(double r){
    const double PI = 3.1415; // double function constant and variable
    double area; 
    area = PI *r*r; // area is doble as is the function type
    return area;
}

double area_of_rectangle(double l, double w){
    double area;
    area= l*w;// area is a double is the funciton type
    return area;
}

bool is_square(double l, double w){
    bool state;
    if (l==w){
        state = true;
    }else{
        state= false;
    }
return state;
}

int main(){
    double radius;
    double length, width;
    int choice;

    cout << fixed<< showpoint << setprecision(2); // setting the output format
// basically becomes an infinite loop
    do {
        cout << "**** Menu ****"<< endl;
        cout << "1. Circle Area Computation" << endl;
        cout << "2. Rectanlge Area Computation"<< endl;
        cout << "3. Quit Program " << endl;

        cout << "Enter your choice: "<< endl;
        cin >> choice;
      
    switch(choice){
        case 1: 
        cout << "Enter the radius: "<< endl;
        cin >> radius;
        cout << "Cirlce area is: "<< area_of_circle(radius)<< endl;
        cout << endl;
        break;

        case 2:
        cout << "Enter the length: "<< endl;
        cin >> length;
        cout << "Enter the width: "<< endl;
        cin >> width;
        cout << "Rectange area is: "<< area_of_rectangle(length, width)<< endl;
        if ( is_square(length, width)) {
            cout << "it is a square! "<< endl;
        }
        cout << endl;
        break;

        default:
        cout<< "You have quit the program! "<< endl;
    }
}while (choice !=3);// end of do statment
return 0;
}