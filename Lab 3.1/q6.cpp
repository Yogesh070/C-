#include <iostream>
using namespace std;
class item{
	static int count;
	public:
	void getdata()
	{
		count++;
		cout<<"the no of time called="<<count<<endl;
	}
};
int item:: count;
main()
{
	item obj,obj1,obj2;
	obj.getdata();
	obj1.getdata();
	obj2.getdata();
}
