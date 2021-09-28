//This is the first program of the project
/*
    write a c++ function which prompts the user to enter
     a name of a text file (i.e. myfile.txt) and a word
     - both are strings. The function then prints to
     the screen the word and how often that word has 
     occured in the file on a single line, seperated by a 
     singlespace. You may assume that all words in the text 
     file are lower case letters and that the only non-letter 
     symbol is the period, ending each sentence in the text
     file
     
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    // here is where we are going to store the user's 
    // input for the txt_name 
    string txt_name;
    // below is where we are going to store the user's
    // input for the word that they want to search for
    string word;
    
// where we get the user's txt_file they want to search
    cout << "Enter the file name that you wish to search: "<< endl;
    cin >> txt_name;
    cout << "You have chosen: " << txt_name <<endl;

// where we get the user's input for the word
    cout << "Enter the word you wish to search in the file " << txt_name << endl;
    cin >> word;
    cout << "You have choosen: " << word << endl;

// opening the file to further search the ammount of times
// that the word that they have chosen has appeared 
    
//input file stream, call variable user_file
    ifstream user_file;

// actually opening the user's file
    user_file.open(txt_name);

// checking if the file can be opened
    if(user_file.is_open()){
    // if the line below is printed then the file was openned
        cout << "the file: " << txt_name << " was successfully opened" << endl;

        user_file.close();
    }else{
        cout << "The file coudn't be opened" << endl;
    }
// try to fit a while loop 



    return 0;
}

