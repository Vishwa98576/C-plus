#include<iostream>
using namespace std;
#define N 3
class matrix{
	private:
		int a[N][N];
	public:
		void setdata()
		{
			for(int i=0;i<N;i++)
			{
				for(int j=0;j<N;j++)
				{
					cout<<endl<<"Enter no =>";
					cin>>a[i][j];	
				}
			}
		}
		void printdata()
		{
			for(int i=0;i<N;i++)
			{
				for(int j=0;j<N;j++)
				{
					cout<<a[i][j];
				}
				cout<<endl;
			}
		}
		//m3=m1+m2
		matrix operator+(matrix m2){
			matrix m3;
			for(int i=0;i<N;i++)
			{
				for(int j=0;j<N;j++)
				{
			m3.a[i][j]=a[i][j]+m2.a[i][j];
			    }
		    }
			return m3;
		}
};

main()
{
	matrix m1,m2,m3;
	m1.setdata();
	m2.setdata();
	m3=m1+m2;
	m3.printdata();
}
