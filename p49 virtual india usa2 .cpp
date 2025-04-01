#include<iostream>
using namespace std;
class india {
	public:
		void virtual hi()
		{
		cout<<endl<<"hi from india";
		}
};
class usa : public india{
	public:
		void hi()
		{
			cout<<endl<<"hi from usa";
		}
};
main()
   {
	india *iptr;
	india i1;
  	usa u1;
  	
  	iptr=&i1;
  	iptr->hi();
  	
  	iptr=&u1;
  	iptr->hi();

   }

