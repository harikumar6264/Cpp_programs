#include<iostream>
using namespace std;
#define MAX 4

class Stu
{
		char name[20];
		int rno;
		int total;
		float perc;
	public:
		void getdetails();
		void showdetails();

};
void Stu:: getdetails()
{
	cout<<"Enter name: ";	cin>> name;
	cout<<"Enter roll no : ";cin>>rno;
	cout<<"Enter total marks out of 600 : ";  cin>>total;
	perc = (float)total/600*100;

}
void Stu:: showdetails()
{
	cout<<"Name : "<<name<<"\t roll no : "<<rno<<"\t Total : "<<total<<endl;
	cout<<"percentage is : "<<perc<<"\n";

}
int main()
{
	Stu student[MAX];
	int n,i;
	cout<<"Enter no. of students : ";
	cin>>n;
	for(i =0;i<=n;i++)
	{
		cout<<"Enter the details of student : "<<i+1<<"\n";
		student[i].getdetails();	
	}
	//student.showdetails();
	for(i =0;i<=n;i++)
	{
		cout<<"Enter the details of student : "<<i+1<<"\n";
		student[i].showdetails();	
	}
	return 0;

}
