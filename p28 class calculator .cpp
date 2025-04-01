#include<iostream>
using namespace std;
class math{
	 int a,b;
	 
	 public:
	 	void setdata()
	 	{
		 cout<<endl<<"Enter a= ";
		 cin>>a;
		 cout<<endl<<"Enter b= ";
		 cin>>b;	
		}
		
		void printdata()
		{
			cout<<endl<<" a="<<a<<" b="<<b;
		}
		void add()
		{
			int add=a+b;
			cout<<endl<<"Add="<<a+b;
		}
		void sub()
		{
			int sub=a-b;
			cout<<endl<<"Sub="<<a-b;
		}
		void mul()
		{
			int mul=a*b;
			cout<<endl<<"Mul="<<a*b;
		}
		void div()
		{
			int div=a/b;
			cout<<endl<<"Div="<<a/b;
		}
};

main()
{
	math m1;
	m1.setdata();
	m1.printdata();
	
	m1.add();
	m1.sub();
	m1.mul();
	m1.div();
}
