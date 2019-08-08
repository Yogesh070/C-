#include <iostream>
using namespace std;
class sum{
	int a,b;
	public:
	sum(int x, int y){
	a=x;
	b=y;	
	cout<<"sum ="<<a+b;
	}
	sum(int x,double y)
	{
	a=x;
	b=y;
	cout<<"Sum="<<a+b;	
	}
};
main()
{
	sum obj(2,3);
	sum obj1 (4,5);
}
