#include<iostream>
using namespace std;
class student{
	private:
		int sno;
		string sname;
		
		public:
			void setstudent()
			{
				cout<<endl<<"Enter sno=";
				cin>>sno;
				cout<<endl<<"Enter sname=";
				cin>>sname;
			}
			void printstudent()
			{
				cout<<endl<<" sno="<<sno<<" sname="<<sname;
			}
};
    class marks
    {
    	protected:
		int hindi,eng;
	public:
		void setmarks()
		{
				cout<<endl<<"Enter hindi marks=";
		        cin>>hindi;
		        cout<<endl<<"Enter eng marks=";
		        cin>>eng;
		}
		void printmarks()
		{
			cout<<endl<<" hindi="<<hindi<<" eng="<<eng;
		}
	
};

class result:public student,public  marks{
		public:
		void total()
		{
			cout<<endl<<" Total = "<<hindi+eng;
		}
};


main()
{
	result r;
	r.setstudent();
	r.setmarks();
	
	r.printstudent();
	r.printmarks();
	
	r.total();
}

