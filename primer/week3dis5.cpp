#include <iostream>
using namespace std;
/*
    Write a program that prompts the user to enter two strings on input 
    and then prints to string
    true if the strings have the same length, Otherwise it prints false
*/
int main(){
    string one;
    string two;
    int oneNum = one.length();
    int twoNum= two.length();
    cout << "You will be prompted to enter two strings: "<< endl;
    cout << "Enter the first string below: "<< endl;
    cin >> one;
    cout << "Enter the second string below: " << endl;
    cin >> two;

    if (oneNum == twoNum){
        cout << "True" << endl;
    } else{
        cout << "False" << endl;
    }
    return 0;
}