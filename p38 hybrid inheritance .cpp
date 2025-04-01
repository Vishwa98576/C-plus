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
			cout<<endl<< "sno="<<sno<<" sname="<<sname;
		}
};
    class marks:public student{
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

    class sports{
    	protected:
    	int cricket;
    	public:
    	  	void setsports()
    	  	{
    	  		cout<<endl<<"Enter cricket marks=";
    	  		cin>>cricket;
		    } 
		    void printsports()
		    {
		    	cout<<endl<<" cricket="<<cricket;
			}
	};
	class result:public marks,public sports{
		public:
			void total()
			{
				cout<<endl<<" Total="<<eng+hindi+cricket;
			}
	};
	main()
	{
	result r;
	r.setstudent();
	r.setmarks();
	r.setsports();
	
	r.printstudent();
	r.printmarks();
	r.printsports();
	
	r.total();
	}
