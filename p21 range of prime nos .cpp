#include<iostream>
using namespace std;
main()
{
	
	
	int i,x,c,j,no1,no2;
	cout<<"Enter the range no1=>";
	cin>>no1;
	cout<<"Enter the range no2=>";
	cin>>no2;
	for(i=no1;i<=no2;i++)
	{
		x=i;
		c=0;
		
		for(j=2;j<x;j++)
		{
			if(x%j==0)
			{
				c=1;
				break;
			}
		}
		if(c==0)
		{
			cout<<x<<" ";
		}
	}
}
