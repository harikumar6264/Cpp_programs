#include <iostream>
using namespace std;
 
class Demo
{
    private: //Private Data member section
        int X,Y;
    public://Public Member function section
         
        //Default or no argument constructor.
        Demo()
        {
                X = 0;
                Y = 0;
                 
                cout << endl << "Constructor Called";
        }
        //Perameterized constructor with default argument.
        Demo(int X, int Y=20)
        {
                this->X = X;
                this->Y = Y;
                 
                cout << endl << "Constructor Called";
        }
         
        //Destructor called when object is destroyed
        ~Demo()
        {
                cout << endl << "Destructor Called" << endl;
        }
        //To print output on console
        void putValues()
        {
                cout << endl << "Value of X : " << X;
                cout << endl << "Value of Y : " << Y << endl;
        }
};
 
//main function : entry point of program
int main()
{
    Demo d1= Demo(10);
     
    cout << endl <<"D1 Value Are : ";
    d1.putValues();
     
    Demo d2= Demo(30,40);
     
    cout << endl <<"D2 Value Are : ";
    d2.putValues();
     
    return 0;
}
