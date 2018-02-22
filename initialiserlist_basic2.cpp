#include<iostream>
using namespace std;
class A
{
	private:
		int &ref;
	public: 
		A(int &ref): ref(ref)
		{
			cout<<"Value is : "<<ref;
		}
};
int main()
{
	int ref =100;
	A a(ref);
	return 0;

}
