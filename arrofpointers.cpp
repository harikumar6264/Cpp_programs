#include <iostream>
using namespace std;
const int MAX = 4;
 
int main () {
   int  var[MAX] = {10, 20, 30,40};
   int *ptr[MAX];
 
   for (int i = 0; i < MAX; i++) {
      ptr[i] = &var[i]; 
   }
   
   for (int i = 0; i < MAX; i++) {
      cout << "Value of var[" << i << "] = ";
      cout << *ptr[i] << endl;
   }
   
   return 0;
}
