/*
this code pairs the month with its number of days, 
using a 2D array/ We have already encounterd the type 
string but we can also think of a string as an array 
of array of characters
*/

#include <iostream>
using namespace std;

int main()
{ 
  const int MONTH_NUMBERS = 12;  // cost tells the compiler that this variable cannot be altered beyond this point by the program
  const int STRING_SIZE = 15; // maximum size of each month name/string

  char months[MONTH_NUMBERS][STRING_SIZE] = {"January","February","March","April","May","June","July","August","September","October", "November","December"}; //month names
 
  int days[MONTH_NUMBERS] = {31,28,31,30,31,30,31,31,30,31,30,31}; // number of days

  // display months and their number of days
  for (int i = 0; i < MONTH_NUMBERS; i++)
  {
    cout << months[i] << " has " << days[i] << " days." << endl;
  }
 
  return 0;
}