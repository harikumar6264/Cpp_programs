#include<iostream>
using namespace std;
class A
{ 
	public:
	void show(){
		cout<<"Display fun in class A\n";
	} 
};

class B:virtual public A {};

class C:virtual public A {};

class D:public B, public C {};

int main()
{
 D obj;
 obj.show();
}
