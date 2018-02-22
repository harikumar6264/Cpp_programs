#include<iostream>
using namespace std;

class Frnd
{
		int x;
	public:
		void getnum(int a);
		friend void shownum(Frnd n);	
};
void Frnd:: getnum(int a)
{
	x = a;
}
void shownum(Frnd n)
{
	cout<<"Value of x (private member data) :"<<n.x<<endl;
}
int main()
{
	Frnd f;
	f.getnum(210);
	shownum(f);
	return 0;


}
