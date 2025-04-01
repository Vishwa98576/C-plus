#include<iostream>
using namespace std;
class student{
	private:
	int no;
	string name;
	static int c;
	
	public:
		void setdata()
		{
			cout<<endl;
			cout<<endl<<"Enter no=";
			cin>>no;
			cout<<endl<<"Enter name=";
			cin>>name;
			c++;
		}
		void printdata()
		{
			cout<<endl<<"no="<<no<<" name="<<name<<" c="<<c;
		}
};
int student::c;

main()
{
	student s1,s2,s3;
	s1.setdata();
	s1.printdata();
	s2.printdata();
	s3.printdata();
	
	s2.setdata();
	s1.printdata();
	s2.printdata();
	s3.printdata();
	
	s3.setdata();
	s1.printdata();
	s2.printdata();
	s3.printdata();
}
