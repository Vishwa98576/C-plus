#include<iostream>
using namespace std;
class india {
	public:
		void hi()
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
  	usa u1;
  	u1.hi();
  	u1.hi();
  
   }

