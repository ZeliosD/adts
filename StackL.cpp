#include "StackL.h"

using namespace std;


int Stack::size(){
   return data.size();
}

void Stack::push(int k) {
   data.insert(k,1);
   return;
}

void Stack::pop(){
   data.remove(1);
   return;
}

int Stack::top(){
   return data.get(1);
}

void Stack::clear(){
   data.clear();
}
