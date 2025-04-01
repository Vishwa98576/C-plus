#include<iostream>
using namespace std;
class employee{
	private:
	int eno;
	string ename;
	int salary;
	
	public:
		
		void setdata()
		{
			cout<<endl<<"Enter eno=";
			cin>>eno;
			cout<<endl<<"Enter ename=";
			cin>>ename;
			cout<<endl<<"Enter salary=";
			cin>>salary;
		}
		void printdata()
		{
			cout<<endl<<" eno= "<<eno <<" ename= "<<ename <<" salary= "<<salary;
		}
};
main()
{
	employee e1,e2,e3;
	e1.setdata();
	e2.setdata();
	e3.setdata();
	
	e1.printdata();
	e2.printdata();
	e3.printdata();
}
