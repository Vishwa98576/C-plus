#include<iostream>
using namespace std;
class maths{
	private:
		int a;
		int b;
		int c;
	public:
		void setdata()
		{
		cout<<endl<<"Enter a=>";
		cin>>a;
		cout<<endl<<"Enter b=>";
		cin>>b;
		cout<<endl<<"Enter c=>";
		cin>>c;
	    }
		void printdata()
		{
		cout<<endl<<"a="<<a<<" b="<<b<<" c="<<c;
	    }
	    void operator+()
	    {
	    	a=+10;
	    	b=+10;
	    	c=+10;
		}
};
main()
{
	maths m1;
	m1.setdata();
	m1.printdata();
	+m1;
	m1.printdata();
}
