#include<iostream>
using namespace std;
void cal(int*);
int main()
{
	int a = 10;
	cal(&a);
	cout<<"value of a ="<<a;
}
void cal(int *x)
{
	*x = *x+11;
}
