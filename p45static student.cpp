#include<iostream>
using namespace std;
class student{
	private:
	int no,i;
	string name;
	static int c;
	
	public:
		void setdata()
		{
			cout<<endl;
			cout<<endl<<"Enter name=";
			cin>>name;
			c++;
		    no=c;
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
	s2.setdata();
	s3.setdata();
	s1.printdata();
	s2.printdata();
	s3.printdata();
}
