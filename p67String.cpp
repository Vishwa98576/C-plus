#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:
	char sname[30];
	
	public:
		void setdata()
		{
			cout<<endl<<"Enter sname =";
			cin>>sname;
	    }
	    void printdata()
	    {
	    	cout<<endl<<"sname="<<sname;
		}
		//s3=s1+s2
		student operator+(student s2)
		{
			student s3;
			
			strcpy(s3.sname,sname);
			strcat(s3.sname,s2.sname);
			
			return s3;
		}
};
main()
{
	student s1,s2,s3;
	s1.setdata();
	s2.setdata();
	s3=s1+s2;
	s1.printdata();
	s2.printdata();
	s3.printdata();
	//s3=s1>s2
}
