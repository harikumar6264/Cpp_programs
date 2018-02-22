#include<iostream>
using namespace std;
int cal(int);
int main()
{
	int a = 10;
	a = cal(a);
	cout<<"value of a ="<<a;
}
int cal(int x)
{
	x = x+11;
	return x;
}
