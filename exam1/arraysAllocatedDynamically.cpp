// Arrays being allocated dynamically
#include <iostream>
using namespace std;
int main()
{
   int n;

   cout << "Enter the array dimension : ";
   cin >> n;

   cout << "allocating an array of length " << n << endl;
                 
   double a[n];
   for(int i=0; i<n; i++) 
      a[i] = double(i); //because the array holds doubles, we convert the integer variable i to a double

   for(int i=0; i<n; i++)
      cout << "  a[" << i << "] = " << a[i] << endl;
  
   cout << "---------------" << endl;

   //arrays can also be allocated dynamically
   int *b;  // this notation is called pointer notation; in C++ arrays and pointers are the same
   b = new int[n]; // dynamic allocation of an integer array
   for(int i=0; i<n; i++) 
      b[i] = i;

   for(int i=0; i<n; i++)
      cout << "  b[" << i << "] = " << b[i] << endl;

   delete[] b; // deallocation (memory release): dynamically allocated objects should always be deleted at the end 

   return 0;
}
