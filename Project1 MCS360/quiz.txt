#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
    int total; // where we are going to store the total of the numbers being added
    // lines of the file being stored
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

    // now we are going to add the integers that are in the file
    while(getline(user_file, line)){
        total = total + stoi(line); //converting the strings to ints. 
        return total;
    }

    cout << "Addition of the numbers added: "<< total<< endl;
    return 0;
}