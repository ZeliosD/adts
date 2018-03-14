#include "StackLL.h"

using namespace std;
class Node(){
   public:
      int data = 0;
      Node* next = nullptr;
};

Stack::~Stack(){
   while(num_elements>0)
      pop();
}
int Stack::size(){
   return num_elements;
}

void Stack::push(int k){
   Node* iPtr = new Node{k};
   iPtr->next = frontPtr;
   frontPtr = iPtr;  
}

void Stack::pop(){
   Node* iPtr = frontPtr;
   frontPtr = frontPtr->next;
   delete iPtr;
   num_elements--;
}

int stack::top(){
   return frontPtr->data;
}

void Stack::clear(){
   while(num_elements>0)
      pop();
}
