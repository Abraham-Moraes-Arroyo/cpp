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

    // here is where the line of the files are 
    // going to be searched 
    string line;
    
    // here is where I have the number of times that a word has apppeared
    // stored in this variable
    // Warning if you set the int wordCount equal 0 then it will return zero at the
    // end
    int wordCount; 
    // where the counted wordCount will be stored at
    int updatedWordCount;

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
        while(getline(user_file, line)){
            // here we take the whole file 
            // and have it stored in string
            // variable named line

            // this line proves if the code is working 
            // fine
            // cout<< line<< endl;

            // now get the word that the user wants
            // to search and find it on the 
            // var named line 
            // line.find(word);

            // going to see how many times the user's 
            // word is in the line file 
            // which represents the txt file 
            for(line.find(word) == true; int wordCount=0; wordCount++){
                // here I have made the change from wordCount++
                // to wordCount+=;
                // tell the professor that It hasn't worked 
                // yet

                //updatedWordCount= wordCount++;
                updatedWordCount=wordCount++;
                // cout <<"The number of words is: " << wordCount<< endl;
                // return wordCount;
            }
            //cout<< wordCount << endl;
            // wordCount++;

            //if we uncomment the here we get the expression printed
            // the amount of times that the word has appeared
            // cout << "The following word: " << word<< " has appeared this many times: "<< wordCount << endl;
        }

    // if the line below is printed then the file was openned
        cout << "the file: " << txt_name << " was successfully opened" << endl;
        // cout << "The following word: " << word<< " has appeared this many times: "<< updatedWordCount << endl;
            cout << "The following word: " << word<< " has appeared this many times: "<< wordCount << " in the text file: "<<txt_name << endl;

        user_file.close();
    }else{
        cout << "The file coudn't be opened" << endl;
    }
// try to fit a while loop 
/*
    At the time I am unable to get the the number of the amount of times
    that the word has been searched in the string where I stored the entire 
    text file. Instead what happens is that the number of times that the word
    is found is printed in the screen like:
    The following word: porch has appeared this many times: 32766
    The following word: porch  has appeared this many times: 32766
    The following word: porch  has appeared this many times: 32766
    The following word: porch  has appeared this many times: 32766
    The following word: porch  has appeared this many times: 32766
    The following word: porch  has appeared this many times: 32766
    The following word: porch  has appeared this many times: 32766

    In my case I created a text file called porch.txt where I made the
    word porch be the most common word in the file, and I know that the
    word porch appears 7 times in the file. The issue is that it prints out
    the phrase 7 times, with the word included; however, I want the number 7
    to be returned in that variable wordCount, so I can then call it later 
    in my code.

*/
    return 0;
}

