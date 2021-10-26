#include <iostream>
using namespace std;
//try to get it to work without using the struct method, perhaps have the double n and the head* previous in the class?
struct Head{
  double n;
  Head *previous;
};

class Node{
  private:
  Head *top;
  public:
  Node(){
    top = NULL; 
  }
  void add(double value){
    Head *new_node= new Head();// creates the new Head
    new_node-> n = value; 
    new_node->  previous= top;
    top= new_node;
  }
  void print(){
    Head *new_node= new Head();
    new_node= top;
    while (new_node != NULL){
      cout << new_node->n <<"->" << new_node<<"->";
      new_node= new_node-> previous; 
    }
    cout << endl;
  }
};


int main() {
  Node Head;// creating the stack 
  Head.add(1.0);
  Head.add(2.0);
  Head.add(3.0);
  Head.print();

  return 0;
}
