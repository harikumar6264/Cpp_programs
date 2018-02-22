#include<iostream>
using namespace std;

class Constructor
{
		int A;
		int B;
	public:
		Constructor();
		void getvalues();
		void showvalues();	
};
Constructor:: Constructor()
{
	A=0;B=0;
}
void Constructor:: getvalues()
{
	cout<<"Enter value of A : ";	cin>>A;
	cout<<"Enetr value of B : ";	cin>>B;
}
void Constructor:: showvalues()
{
	cout<<"\n A : "<<A;
	cout<<"\n B : "<<B;

}
int main()
{
	Constructor obj;
	cout<<"Method 1 "<<endl;
	obj.showvalues();
	obj.getvalues();
	obj.showvalues();
	Constructor obj1 = Constructor();
	obj1.showvalues();
	return 0;

}
