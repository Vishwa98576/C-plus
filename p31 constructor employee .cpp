#include<iostream>
using namespace std;
class employee{
	private:
		int eno;
		string ename;
		int salary;
		
		public:
			
	employee()
	{
		eno=5;
		ename="raj";
		salary=12000;
	}
	
	employee(int x,string y,int c)
	{
		eno=x;
		ename=y;
		salary=c;
	}
			
	void printdata()
	{
		cout<<endl<<" eno= "<<eno <<" ename= "<<ename <<" salary= "<<salary;
	}
};

main()
 {
 	employee e1,e2,e3(12,"raja",20000),e4(13,"mohan",21000);
 	e1.printdata();
 	e2.printdata();
 	e3.printdata();
 	e4.printdata();
 }
