#include<iostream>
using namespace std;

main()
{
	int i,no;
	cout<<endl<<"Enter no =>";
	cin>>no;
	
	for(i=2;i<=no;i++)
	{
		if(no%i==0)
		{
		 cout<<endl<<"is a prime no";
	    } 
	    else
	    {
	      cout<<endl<<"is not a prime no";
		}
	}
	
}
