#include<iostream>
using namespace std;
class SecA
{
		char name[40];
		int rollno;
		char gender;
	public:
		void get(void);
		void show(void);
};
void SecA::get(void)
{
	cout<<"enter the details"<<endl;
	cout<<"\nName ? ";	cin>>name;
	cout<<"rollno ? ";	cin>>rollno;
	cout<<"gender ?";	cin>>gender;
}
void SecA::show(void)
{
	cout<<"Name = "<<name<<endl<<"rollno = "<<rollno<<endl<<"gender = "<<gender<<endl;

}
class SecB:public SecA
{
	private:
        int     totalM;
        float   perc;
        char    grade;
    public:
        void get(void);
        void show(void);
};
 
//function definitions
void SecB::get(void)
{
    cout << "Enter student's result information:" << endl;
    cout << "Total Marks?: ";     cin >> totalM;
    perc= (float)((totalM*100)/500);
    cout << "Grade?: ";cin >> grade;
}
 
void SecB::show(void)
{
    cout << "Total Marks: " << totalM << ",Percentage: " << perc << ",Grade: " << grade << endl;
}
int main()
{
	SecA obj1;
	SecB obj2;
	obj1.get();
	obj1.show();
	obj2.get();
	obj2.show();
}
 


