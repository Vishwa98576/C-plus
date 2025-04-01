#include<iostream>
using namespace std;
class student{
	    private:
	    int sno;
		string sname;     	
		public:
			student()
			{
				sno=9;
				sname="raj";
			    cout<<endl<<"in student cons";		
			}
			void printstudent()
			{
				cout<<endl<<" sno="<<sno<<" sname="<<sname;
			}
	};
class marks:public student{
	protected:
	int eng,hindi;
	public:
		marks()
		{
			eng=22;
			hindi=24;
			cout<<endl<<"in marks cons";
		}
		void printmarks()
		{
			cout<<endl<<"eng="<<eng<<" hindi="<<hindi;
		}
	};
	class result:public marks{
		public:
		result()
		{
			cout<<endl<<"in res cons";
		}
		void printresult()
		{
			cout<<endl<<"Total="<<eng+hindi;
		}
	};


main()
{
	result r1;
	r1.printstudent();
	r1.printmarks();
	r1.printresult();
}
