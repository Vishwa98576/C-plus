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
		int a;
	public:
		void setindia()
		{
				cout<<endl<<"Enter a=";
		        cin>>a;
		}
		void printindia()
		{
			cout<<endl<<" a="<<a;
		}
		void multi()
		{
			cout<<endl<<" Multi = "<<a*usa::a;
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
