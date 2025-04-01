#include<iostream>
using namespace std;
class india {
	public:
		void virtual hi()=0;
};
class usa : public india{
	public:
		void hi()
		{
			cout<<endl<<"hi from usa";
		}
};

class uk:public india
{
	public:
		void hi()
		{
			cout<<endl<<"hi from uk";
		}

};2
main()
   {
	india *iptr;
  	usa u1;
	uk k1;
	  	  	
  	iptr=&u1;
  	iptr->hi();
	
	iptr=&k1;
	iptr->hi();
   }

