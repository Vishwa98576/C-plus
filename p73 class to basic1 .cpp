#include<iostream>
using namespace std;
class time{
	int hrs,mins;
	public:
		time(int ,int);   
		operator int();   
		~time()          
		{
			cout<<" Destructor called..."<<endl;
		}
};

time::time(int a,int b)
{
	cout<<"Constructor called with two parameters..."<<endl;
	hrs=a;
	mins=b;
}
 
time::operator int()
{
	cout<<"Class Type to Basic Type Conversion"<<endl;
	return(hrs*60+mins);
}
 int main()
 {
 	int h,m,duration;
	cout<<"Enter Hours: ";
        cin>>h;
	cout<<"Enter Minutes: ";
        cin>>m;
	time t(h,m);       
	duration = t;      
	cout<<"Total Minutes are = "<<duration;
	cout<<" 2nd method operator overloading "<<endl;
	duration = t.operator int();
	cout<<"Total Minutes are = "<<duration;
 }
