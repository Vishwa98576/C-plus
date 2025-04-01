#include<iostream>
using namespace std;
class book{
	private:
	int bid;
	string bname;
	int bprice;
	
	public:
		
		void setdata()
		{
			cout<<endl<<"Enter bid=";
			cin>>bid;
			cout<<endl<<"Enter bname=";
			cin>>bname;
			cout<<endl<<"Enter bprice=";
			cin>>bprice;
	
		}
		void printdata()
		{
			cout<<endl<<" bid="<<bid<<" bname="<<bname<<" bprice="<<bprice;
		
		}
};
main()
{
	book b1,b2,b3;
	b1.setdata();
	b2.setdata();
	b3.setdata();
	
	b1.printdata();
	b2.printdata();
	b3.printdata();
}
