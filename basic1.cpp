#include<iostream>
using namespace std;
class A
{
	public:
		A(int x)
		{
			cout<< "A class constructor x value is : \n"<<x; 
		}
};
class B : public A
{
	public:
		B():A(19)
		{
			cout<<"initialised class B constructor "<<endl;
		}
};
int main()
{
	B b;
	return 0;
}
