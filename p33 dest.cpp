#include<iostream>
using namespace std;
class student{
	private:
		int sno;
		string sname;
		int eng,hindi;
		
		public:
			student()
			{
				sno=9;
				sname="raj";
				eng=20;
				hindi=22;
				cout<<endl<<"in cons";
			}
			~student()
			{
				cout<<endl<<"Bye";
			}
		void printdata()
	{
		cout<<endl<<" sno="<<sno <<" sname="<<sname <<" eng="<<eng<<" hindi="<<hindi;	
    }
};

main()
{
	student s1;
	{
		student s2;
		{
			student s3;
			s3.printdata();
		}
		s2.printdata();
	
	}
	s1.printdata();
	
}

