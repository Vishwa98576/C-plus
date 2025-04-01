#include<iostream>
using namespace std;
class student{
	private:
	int sno;
	string sname;
	
	public:
		
		void setdata()
		{
			cout<<endl<<"Enter sno =";
			cin>>sno;
			cout<<endl<<"Enter sname =";
			cin>>sname;			
		}
		void printdata()
		{
		 cout<<endl<<"sno="<<sno<<" sname="<<sname;
        }	
};
class marks:public student {
	protected:
		int hindi,eng;
		public:
			void setdata()
			{
				student::setdata();
			  cout<<endl<<"Enter hindi marks=";
			  cin>>hindi;
			  cout<<endl<<"Enter eng marks=";
			  cin>>eng;	
			}
			void printdata()
			{
				student::printdata();
				cout<<endl<<"hindi="<<hindi<<" eng="<<eng;
			}
};

class result: public marks{
	public:
		void printdata()
		{
			marks::printdata();
			cout<<endl<<"Total = "<<eng+hindi;
		}
};
main()
{
	result r1;
	r1.setdata(); //function overriding
	r1.printdata();
}
	
