#include<iostream>
using namespace std;
class A
{
	public:
		int x=100;
};
class B : public A
{
	public:
		int y=200;
};
int main()
{
	A obj1;
	B obj2;
	cout<<"Value of x : "<<obj1.x<<endl;
	cout<<"Value of y : "<<obj2.y<<endl;
}
