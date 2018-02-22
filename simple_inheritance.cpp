#include<iostream>
using namespace std;
class A
{
	public:
		void fun1(void);
};
void A::fun1(void)
{
	cout<<"In class A fun1 \n";
}
class B:public A
{
	public:
		void fun2(void);
};
void B::fun2(void)
{
	cout<<"In class B fun2 \n";

}
int main()
{
	B obj1;
	obj1.fun1();
	obj1.fun2();
	return 0;

}
