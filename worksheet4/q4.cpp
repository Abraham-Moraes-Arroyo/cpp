/*
Create a months.txt file, which holds each month of the year on each line.
Write a C++ function which reads the file using a while loop 
and prints each month to screen.
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
    
    string line;
    // input for the txt_name 
    string txt_name;
    //input file stream, call variable user_file
    ifstream user_file; 
    // opening the file
    user_file.open(txt_name);
    // where we are going to ask the user's file
    cout << "Enter the file name that you wish to search: "<< endl;
    cin >> txt_name;
    cout << "You have chosen: " << txt_name <<endl; 

    // testing if file was oppened and then 
    // now we are going to print the contents of the 
    // file out

    if(user_file.is_open()){
    // if the line below is printed then the file was openned
        cout << "the file: " << txt_name << " was successfully opened" << endl;

        user_file.close();
    }else{
        cout << "The file coudn't be opened" << endl;
    }
    return 0;

}
