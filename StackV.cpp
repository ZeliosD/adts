#include "StackV.h"
#include <vector>
#include <iostream>

using namespace std;

int Stack::size(){
   return data.size();
}

void Stack::push(int k){
  data.push_back(k);
}

void Stack::pop(){
  data.pop_back();
}

int Stack::top(){
  return data[data.size()-1];
}

void Stack::clear(){
   while (data.size()>0)
      data.pop_back();
}
