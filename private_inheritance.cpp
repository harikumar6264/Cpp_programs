#include<iostream>
using namespace std;
class A
{
		int x;
	protected:
		int y;
	public:
		void setvalue(int i)
		{
			y=i;
		}
};
class B:private A
{
	public:
		void printvalue(void)
		{
			setvalue(10);
			cout<<"value of y : "<<y<<endl;
		}
};
int main()
{
	B obj1;
	obj1.printvalue();
	return 0;
}
