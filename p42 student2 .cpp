#include<iostream>
using namespace std;
class student{
	private:
		int sno;
		string sname;
		public:
			student(int x,string y)
			{
				sno=x;
				sname=y;
			}
		void printstudent()
		{
			cout<<endl<<"sno="<<sno<<" sname="<<sname;
		}
	};	
		    class marks:public student{
		    	protected:
		    	int eng,hindi;
		    	public:
		    	marks(int x,string y,int e,int h):student(x,y)
	        {
	        	eng=e;
		        hindi=h;
	        }
			
		void printmarks()
	{
		cout<<endl<<"eng="<<eng<<" hindi="<<hindi;	
    }
};

class result:public marks{
	public:
		result(int x,string y,int e,int h):marks(x,y,e,h)
		{
			
		}
	void printresult()
	{
		cout<<endl<<"Total="<<eng+hindi;
	}
	
};
main()
{
result r1(1,"ram",22,33);
r1.printstudent();
r1.printmarks();
r1.printresult();
}

