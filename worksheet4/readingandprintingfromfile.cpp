/* Readin Passing strings to a function */

#include <iostream>
#include <fstream> // library to for file processing
#include <string>
using namespace std;

int main () {
    string line;
    string text;
    ifstream my_file;  // input file strem 
    my_file.open("chicago-wiki.txt"); // ifstream my_file("chicago-wiki.txt"); is another way to open a file 
    if (my_file.is_open()){
       while(getline(my_file, line)){
          cout << line << endl;
          text += line;
       }
       my_file.close();
    } 
    else{ 
      cout << "File cannot be opened!";
    }
    cout << "--------------" << endl;
    cout << "The whole text as a single string" << endl;
    cout << "--------------" << endl;
    cout << text << endl;
    return 0;
}
