#include<iostream>
using namespace std;

main()
{
	int i,no,f=1;
	cout<<endl<<"Enter no =>";
	cin>>no;
	for(i=no;i>=1;i--)
	{
		cout<<i<<" X ";
    	f=f*i;
	}
	 
	cout<<endl<<"Fact = "<<f;
    
}
