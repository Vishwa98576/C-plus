#include<iostream>
using namespace std;

main()
{
	
	int i,no=120,f=1;
	for(i=1;i<=no;i++)
	{
		cout<<i<<" X ";
    	f=f*i;
	}
	 
	cout<<endl<<"Fact = "<<f;
    
}
