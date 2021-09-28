#include <iostream>
using namespace std;
/*evaluate the expression below*/
string happy= "Happy Birthday to you";
happy== "Happy birthday to you";
"Happy birthday to you" ==happy;
string un_happy == happy[0] +string("Happy birthday to you").substr(1);
"happy" <"Happy"
"happy" < happy
int p1= happy.find_first_of(" ,.!",1);
int p2= happy.find_first_of(" ,.!",p1+1);
string what= happy.substr(p1+1,p2-p1-1);