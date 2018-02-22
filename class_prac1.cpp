#include<iostream>
using namespace std;
class Distance
{
		int feet;
		int inch;
	public:
		Distance();
		void getDistance();
		void showDistance();
};
Distance:: Distance()
{
	feet =0;inch = 0;
}
void Distance:: getDistance()
{
	cout<<"Enter value of feets : "; cin>>feet;
	cout<<"Enter value of inches : "; cin>>inch;
	inch = (inch>=12)?12 : inch;

}
void Distance:: showDistance()
{
	cout<<"\nFeets : "<<feet;
	cout<<"\nInches : "<<inch;	

}
int main()
{
	Distance dist1;
	Distance dist2;
	cout<<"Enter distance\n";
	dist1.getDistance();
	dist2.getDistance();
	cout<<"Distance is ";
	dist1.showDistance();
	dist2.showDistance();
	cout<<endl;
	return 0;


}


