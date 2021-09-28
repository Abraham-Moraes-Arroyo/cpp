// C++ Program to illustrate the iterators in vector
#include <iostream>
#include <vector>

using namespace std;
int main(){

    vector<int> g1;
    for (int i =1; i<=5; i++){
        g1.push_back(i);
    }
    // here we create a list of numbers that we push at 
    // end of the list and print them out
    cout << "Output of begin and end: "<< endl; 
    for (auto i=g1.begin(); i !=g1.end(); ++i){
        cout << *i<< " ";
    }
    // here we print the list of numbers
    cout << "\nOutput of cbegin and cend: "<<endl;
    for (auto i =g1.cbegin(); i !=g1.cend(); ++i){
        cout << *i << " ";
    }
    // here we print the reverse list of numbers
    cout << "\nOutput of rbegin and rend: "<< endl;
    for (auto ir =g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir<< " ";

    // another way to print the list of numbers reverse:
    cout << "\nOutput of crbegin and credn: "<< endl;
    for (auto ir= g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir<< " ";
    return 0;
}