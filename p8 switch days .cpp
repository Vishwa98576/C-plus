#include<iostream>
using namespace std;

main()
{
	int day;
		cout<<endl<<"Enter a day =>";
	    cin>>day;
	    
	    switch(day)
	    {
	    	case 1:
	    		cout<<endl<<"Monday";
	    		break;
	    	case 2:
	    		cout<<endl<<"Tuesday";
	    		break;
	    	case 3:
	    		cout<<endl<<"Wwdnesday";
	    		break;
	    	case 4:
	    		cout<<endl<<"Thursday";
	    		break;
	    	case 5:
	    		cout<<endl<<"Friday";
	    		break;
	    	case 6:
			    cout<<endl<<"Saturday";
	    		break;
			case 7:
			    cout<<endl<<"Sunday";
	    		break;	
	    	default:
	    		cout<<endl<<"Wrong choice";
		}
    }
