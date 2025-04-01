#include<iostream>
using namespace std;
class student{
	private:
	int sno;
	string sname;
	int eng,hindi;
	
	public:
		
		void setdata()
		{
			cout<<endl<<"Enter sno =";
			cin>>sno;
			cout<<endl<<"Enter sname =";
			cin>>sname;
			cout<<endl<<"Enter hindi marks =";
			cin>>hindi;
			cout<<endl<<"Enter eng marks =";
			cin>>eng;
		}
		void printdata()
		{
		 cout<<endl<<"sno= "<<sno<<"sname= "<<sname<<"hindi= "<<hindi<<"eng= "<<eng;
        }	
};
main()
{
	student s1,s2,s3;
	s1.setdata();
	s2.setdata();
	s3.setdata();
	
	s1.printdata();
	s2.printdata();
	s3.printdata();
}
