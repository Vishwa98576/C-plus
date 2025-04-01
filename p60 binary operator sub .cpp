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
			cout<<endl<<"Enter a=";
            cin>>a;
			cout<<endl<<"Enter b=";
			cin>>b;
			cout<<endl<<"Enter c=";
			cin>>c;				
			}
			void printdata()
			{
				cout<<endl<<"a="<<a<<" b="<<b<<" c="<<c;
			}
			maths operator-(maths m2)
	    {
	    		maths m3;
	    		m3.a=a-m2.a;
	    		m3.b=b-m2.b;
	    		m3.c=c-m2.c;
	    		return m3;
		}
};
main()
{
	maths m1,m2,m3;
	m1.setdata();
	m2.setdata();
	m1.printdata();
	m2.printdata();
	m3=m1-m2;
	m3.printdata();
}
