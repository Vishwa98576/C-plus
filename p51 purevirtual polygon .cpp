#include<iostream>
using namespace std;
class polygon {
	public:
	void virtual area(float h,float b)=0;
};
class triangle : public polygon{
		public:
		void area(float b,float h)
		{
			cout<<endl<<"area of triangle="<<0.5*b*h;
		}
};
class rectangle:public polygon{
		public:
			void area(float b,float h)
			{
				cout<<endl<<"area of rectangle="<<h*b;
			}
};
main()
{
	polygon *ptr;
	triangle t1;
	rectangle r1;
	
	ptr=&t1;
	ptr->area(100,200);
	
	ptr=&r1;
	ptr->area(100,200);
}
