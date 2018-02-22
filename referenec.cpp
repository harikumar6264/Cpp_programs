/* Demo prg for references in c++ */
#include<iostream>
using namespace std;
 
int main()
{
  int x = 10;
 
  int& ref = x;
  cout<<"value of ref = "<<ref<<endl;
  
  ref = 20;
  cout << "value of x = " << x << endl ;
 
  x = 30;
  cout << "value of ref = " << ref << endl ;
 
  return 0;
}
