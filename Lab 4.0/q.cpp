#include <iostream>
using namespace std;
class area{
	int l,b;
	public:
	area(){
		l=0;
		b=0;
	cout<<"area of rectangle ="<<l*b<<endl;
	}
	area(int x, int y)
	{
	l=x;
	b=y;
	cout<<"area of rectangle ="<<l*b;	
	}
};
main()
{
	area obj;
	int l,b;
	cout<<"enter the length and breath of the rectangle"<<endl;
	cin>>l>>b;
	area obj1 (l,b);
}
