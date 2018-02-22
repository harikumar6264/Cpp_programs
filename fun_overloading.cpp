#include<iostream>
using namespace std;
class A
{
	public:
		void show(int i,float f=0)
		{
			cout<<"Entered value is i = "<<i<<"\t"<<f<<endl;
		}
		void show(double d,char *fc)
		{
			cout<<"Entered value is f = "<<d<<"\t"<<fc<<endl;
		}
		void show(char *c)
		{
			cout<<"Entered value is i = "<<c<<endl;
		}	
};
int main()
{
	A obj;
	obj.show(210);
	obj.show(69.1,"MJRCET");
	obj.show("HARI KUMAR ");
	return 0;
}
