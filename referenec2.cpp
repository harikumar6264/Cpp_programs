#include<iostream>
using namespace std;
 
void swap (int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}
 
int main()
{
	int a = 2, b = 3;
    	cout<<"Before values swaped"<<endl;
 	cout<<a<<"  "<<b<<endl; 
    	swap( a, b );
    	cout<<"After values swaped"<<endl;
	cout << a << " " << b<<endl;
    	return 0;
}
