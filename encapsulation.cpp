#include<iostream>
using namespace std;
class A
{
	int total;

public:
	A(int i=0)
	{
		total = i;
	}
	int addnum(int a)
	{
		total += a; 
	}
	int getter()
	{
		return total;
	}

};
int main()
{
	A obj;	
	obj.addnum(10);
	obj.addnum(20);
	cout<<"value of total = "<<obj.getter();

}

