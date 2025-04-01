#include<iostream>
using namespace std;
class bank{
	private:
	int bno;
	string bname;
	int bbalance ;
	
	public:
		
		void setdata()
		{
			cout<<endl<<"Enter bno=";
			cin>>bno;
			cout<<endl<<"Enter bname=";
			cin>>bname;
			cout<<endl<<"Enter bbalance=";
			cin>>bbalance;
		}
		void printdata()
		{
			cout<<endl<<" bno="<<bno<<" bname="<<bname<<" bbalance="<<bbalance;
		}
};
main()
{
	bank b1,b2,b3;
	b1.setdata();
	b2.setdata();
	b3.setdata();
	
	b1.printdata();
	b2.printdata();
	b3.printdata();
}
