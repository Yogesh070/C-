#include <iostream>
#include <conio.h>
using namespace std;
class item{
	static int count;
	public:
	void getdata()
	{
		count=count+1;
		cout<<"the no of times called="<<count;
	}
};
main()
{
	item obj;
	item obj1;
	item obj2;
	obj.getdata();
	obj1.getdata();
	obj2.getdata();
}
