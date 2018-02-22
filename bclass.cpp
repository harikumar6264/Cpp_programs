#include<iostream>
using namespace std;
class Abc{
	
	int a;
public:
	void disp()
	{
		cout<<"Inside member function";
	}
};
int main(){
	Abc obj;
	obj.Abc::disp();

}
