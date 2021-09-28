#include <iostream>
using namespace std;

int modifier(){
    int i;// will be used for the largestNum for function
    int b;// will be used for placing cin into an array
    int largeNum; // where I am going to store the largest number in the array
    // I am doing this first, so I can get the hang of checking for the largest
    // number of one array, before moving on to sub arrays

    int Array[10];// at the moment I am only going to be working with
                  // an one array until I can get the hang of having 
                  // sub arrays
                  // I chose 10 because in the example there are 10
                  // numbers in total with all the sub arrays combinded

    // Here is where we are going to store the numbers that the user
    // input and have them be stored in an array named Array
    for (b=0; b<10; b++){// I chose 10 because it represents the number of 
        cin >> Array[b]; // inputs that the user may input for the actual project
                         // my attempt on doing so, but I keep getting a large integer
    }

/*
    here is where we are going to check for the largest 
    number in the array, and if we find one we then compare 
    it with the rest of the numbers of the array to 
    check if there are any bigger numbers in the array 
    reads it left to right direction
*/
    for (i=0; i<10; i++){
        if (Array[i]>largeNum){
            largeNum= Array[i]; // we got the biggest number
        }
    }
    /*
    I eventually want to use this function for the sub arrays.
    However, at the moment I am struggling with just working 
    with one array. So I won't be able to apply this 
    */

// I want to take the array and have the elements be 
// seperated by commas, but this is something for 
// the show function
    //cout << "this is your array: " << Array[b]<< endl;
// at the moment I am having issues with having the actual 
// array being printed out, instead I get a large 
// number that at times comes out negative
    return 0;// to avoid warnings
}

int show(){
    // where the array would be printed all nicely
    cout<< "This your updated 2-D array that has been organized" << endl;
    // I would have put the variable, but that will cause my code to brake and 
    // I would loose points because my code would not be compiled and run. 
}

int main(){
    cout <<"Please enter you array of 10 numbers, by entering one number at the time and pressing enter, so you can enter the next number: "<< endl;
    // makes the changes to the 2-d array 
    modifier();
    // shows the changes to the 2-d array
    show();
    return 0;
}