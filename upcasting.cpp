#include<iostream>
using namespace std;
class Super
{ int x;
  public:
  void funBase() 
	{ cout << "Super function"; }
};

class Sub : public Super
{ int y;
};

int main()
{
 Super* ptr;    // Super class pointer
 Sub obj;
 ptr = &obj;

 Super& ref;    // Super class's reference    
 ref=obj;
}
