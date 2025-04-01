#include<iostream>
using namespace std;

main()
{
	int i;
	int a[]={4,6,8,9,3};
	int size=sizeof(a)/sizeof(a[0]);
	int sum=0;
	
	for(i=0;i<=size;i++)
	{
		sum +=a[i];
	}
	cout<<"sum of all values in array=>"<<sum<<endl;
}
