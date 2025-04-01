#include<iostream>
using namespace std;
class bank{
	private:
	int accno;
	string cname;
	int balance;
	
	public:
		void Openacc()
		{
			cout<<endl<<"Enter accno =";
			cin>>accno;
			cout<<endl<<"Enter cname =";
			cin>>cname;
			cout<<endl<<"Enter balance =";
			cin>>balance;
		}
		
		void Printacc()
		{
			cout<<endl<<" accno="<<accno<<" cname="<<cname<<" balance="<<balance;
		}
};
main()
{
	bank b1;
	b1.Openacc();
	b1.Printacc();
}
