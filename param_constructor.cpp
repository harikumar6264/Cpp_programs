#include<iostream>
using namespace std;

class Constructor
{
		int A;
		int B;
	public:
		Constructor(int x,int y);
		void getvalues();
		void showvalues();	
};
Constructor:: Constructor(int x,int y)
{
	A=x;B=y;
}
void Constructor:: getvalues()
{
	cout<<"Enter value of A : ";	cin>>A;
	cout<<"Enetr value of B : ";	cin>>B;
}
void Constructor:: showvalues()
{
	cout<<"\n A : "<<A;
	cout<<"\n B : "<<B<<endl;

}
int main()
{
	Constructor obj(11,22);
	cout<<"Method 1 "<<endl;
	obj.showvalues();
	obj.getvalues();
	obj.showvalues();
	Constructor obj1 = Constructor(10,20);
	obj1.showvalues();
	return 0;

}
