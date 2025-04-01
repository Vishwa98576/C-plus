#include<iostream>
using namespace std;
class usa{
	protected:
		int a;
	public:
		void setusa()
		{
				cout<<endl<<"Enter a=";
		        cin>>a;
		}
		void printusa()
		{
			cout<<endl<<" a="<<a;
		}
};
class india:public usa
{
	private:
		int b;
	public:
		void setindia()
		{
				cout<<endl<<"Enter b=";
		        cin>>b;
		}
		void printindia()
		{
			cout<<endl<<" b="<<b;
		}
		void multi()
		{
			cout<<endl<<" Multi = "<<a*b;
		}
};


main()
{
	india i1;
	i1.setusa();
	i1.setindia();

	i1.printusa();
	i1.printindia();

	i1.multi();
}
/*
student sno sname , setstudent printstudent
marks eng hindi , setmarks printmarks
result
	printresult
		total
*/ 
