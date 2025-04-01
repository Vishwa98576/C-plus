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
	employee e[100];
	int n,i;
	cout<<endl<<"Enter the no of employees=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		e[i].setdata();
	}
	for(i=0;i<n;i++)
	{
		e[i].printdata();
	}
}

