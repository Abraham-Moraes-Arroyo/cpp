// Here are another example of how to work with the 
// the functions that are used in vectors
// capacity function in vector

#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> g1;// here we have an empty vector

    for (int i=1; i<=5; i++){
        g1.push_back(i);
    }
    //demonstrates the amount of elements in the vector g1
    cout << "Size : "<< g1.size()<< endl;
    // the amount that it can hold?
    cout << "capacity : "<< g1.capacity()<<endl;
    // the max amount that it can hold entirely
    cout << "<Max_size: "<< g1.max_size()<< endl;

    // resize the vector size to 4
    g1.resize(4);

    // prints the vector size after resize()
    cout << "\n size: "<< g1.size();
    //shold return 4

    //checks if the vector is empty or not
    if(g1.empty() == false){
        cout << "\nVector is not empty"<< endl;

    }else{
        cout << "\n vector is empty"<< endl; 
    }

    // shrinking the vector to the amount of 
    // elements that we have:
    g1.shrink_to_fit();
    cout <<"\nVector elements are: "<< endl;
    for (auto it=g1.begin();  it !=g1.end(); it++){
        cout << *it<< " ";
    }

    return 0;
}