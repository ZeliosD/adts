#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;
 for(int i = 10; i>0; i--) {
   L1.insert(i, 1);
 }

 cout << L1.get(8)<<endl;
 L1.clear();
 cout << L1.get(8)<<endl;
 
}
