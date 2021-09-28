#include <iostream>
using namespace std;
// found out that if I have the function modifier on top 
// it will get triggered, and if I have the actuall 
// function after the int main() then it will work 
// along with the show function

int modifier();
int show();

int main(){
    cout <<"Please enter you array of 10 numbers, by entering one number at the time and pressing enter, so you can enter the next number: "<< endl;
    modifier();
    return 0;
}

int modifier(){
    int i;// will be used for the largestNum for function
    int b;// will be used for placing cin into an array
    int left;
    int right;
    int largeNum; // where I am going to store the largest number in the array
    // I am doing this first, so I can get the hang of checking for the largest
    // number of one array, before moving on to sub arrays

    int Array[10];// at the moment I am only going to be working with
                  // an one array until I can get the hang of having 
                  // sub arrays

    // Here is where we are going to store the numbers that the user
    // input and have them be stored in an array named Array
    for (b=0; b<10; b++){// I chose 10 because it represents the number of 
        cin >> Array[b]; // inputs that the user may input for the actual project
        // my attempt on doing so, but I keep getting a large integer
    }

    // here is where we are going to check for the largest 
    // number in the array and store it as we go
    for (i=0; i<10; i++){
        if (Array[i]>largeNum){
            largeNum= Array[i];
        }
    }
    /*
    I keep running to the same error where I can only print out the 
    largest number of the array, but I want to rearange the array
    Also I can print largest number of the array, but I want to
    have that be done in the show function instead of the modifier function
    not sure on how to do that. 
    */

   // here I can print the array that the user put in
   // I plan to take the array and have it be printed 
   // nice for the viewer can see it
    cout << "this is your array: " << Array[i]<< endl;
    return 0;// to avoid warnings
}

int show(){
    /*
     here is where I plan to have the array be printed
     the way that the teacher wanted it to be done
     */
    cout << "Your array: " <<endl;
    return 0;// to avoid warnins

}
