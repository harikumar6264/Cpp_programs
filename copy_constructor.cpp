#include<iostream>
using namespace std;

class Constructor
{
		int A;
		int B;
	public:
		Constructor(int x,int y);
		Constructor(const Constructor &z);
		void showvalues();	
};
Constructor:: Constructor(int x,int y)
{
	A=x;B=y;
}
Constructor:: Constructor(const Constructor &z)
{
		A = z.A;
		B = z.B;
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
//	obj.getvalues();
//	obj.showvalues();
	Constructor obj1 = Constructor(obj);
	obj1.showvalues();
	return 0;

}
