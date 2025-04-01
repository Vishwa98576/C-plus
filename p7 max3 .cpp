#include<iostream>
using namespace std;

main()
{
	int no1,no2,no3 ;
	cout<<endl<<"Enter no1 =>";
	cin>>no1;
	cout<<endl<<"Enter no2 =>";
	cin>>no2;
	cout<<endl<<"Enter no3=>";
	cin>>no3;
	
	if(no1>no2 && no1>no3)
	{
		cout<<endl<<"No1 is max";
	}
	else if(no2>no1 && no2>no3)
	{
		cout<<endl<<"No2 is max";
	}
	else if(no3>no1 && no3>no2)
	{
		cout<<endl<<"No3 is max";
	}
	else
	{
		cout<<endl<<"All are equal";
	}
}
