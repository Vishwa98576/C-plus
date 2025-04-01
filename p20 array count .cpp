#include<iostream>
using namespace std;

main()
{
	int i;
	int a[100]={11,-5,70,-11,65,9,35,-2,9,-11};
	int size=sizeof(a)/sizeof(a[0]);
	int value = 11;
	int count=0;
	
	for(i=0;i<=size;i++);
	{
		if(a[i]==value)
		{
			count++;
		}
		if(count>0)
		{
		cout<<"the value"<<value<<"is found"<<count<<"times in the array"<<endl;
	    }
		else
		{
			cout<<"the value"<<value<<"is not found in array"<<endl;
		}   
	}
}
