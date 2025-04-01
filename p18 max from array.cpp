#include<iostream>
using namespace std;

main()
{
	int n=9,i,m;
	int arr[100]={11,-5,70,-19,65,9,35,-2,7};
	int maxvalue=arr[0];
	for(i=0;i<n;i++)
	{
		if(maxvalue<arr[i])
		{
			m=arr[i];
		}
		cout<<arr[i]<<" ";
	}
	
	
}
