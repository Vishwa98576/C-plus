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
			}
		     student(int x,string y,int e,int h)
	        {
	        	sno=x;
	        	sname=y;
		        eng=e;
		        hindi=h;
	        }
			
		void printdata()
	{
		cout<<endl<<" sno="<<sno <<" sname="<<sname <<" eng="<<eng<<" hindi="<<hindi;	
    }
};

main()
{
	student s1,s2,s3(12,"raja",20,18),s4(13,"mohan",21,25);
	s1.printdata();
	s2.printdata();
	s3.printdata();
	s4.printdata();
}

