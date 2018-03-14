#include "StackV.h"

using namespace std;

int Stack::size(){
   return data.size();
}

void Stack::push(int k){
  data.push_back(k);
}

void Stack::pop(){
  data.erase(data.size()-1);
}

int Stack::top(){
  return data[data.size()-1);
}

void Stack::clear(){
   if (vector.size()>0)
      vector.erase(0,data.size-1);
}
