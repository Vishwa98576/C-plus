#include<iostream>
using namespace std;
class employee{
	private:
	int eno;
	string ename;
	int esalary;
	 
	 public:
	 	employee()
	{
		eno=5;
		ename="raj";
		esalary=12000;
		cout<<endl<<"in cons";
	}
		~employee()
			{
				cout<<endl<<"Bye";
			}
		void printdata()
		{
			cout<<endl<<" eno= "<<eno <<" ename= "<<ename <<" esalary= "<<esalary;
		}
};

main()
{
	employee e1,e2,e3;
	e1.printdata();
	e2.printdata();
	e3.printdata();
}
