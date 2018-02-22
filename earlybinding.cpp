#include<iostream>
using namespace std;
class Base
{
 public:
       virtual void show()
 {
  cout << "Base class\t";
 }
};
class Derived:virtual public Base
{
 public:
	 void show()
 {
  cout << "Derived Class"<<endl;
 }
};
class Derived1:virtual public Base,public Derived
{
	public:
		void show()
		{
			cout<<"Derived class 2"<<endl;
		}
};

int main()
{
 Base* b;       //Base class object
 Derived d;     //Derived class object
 Derived1 d2;
 b = &d;     //Early Binding Ocuurs
 b = &d2;
 b->show();   
}
