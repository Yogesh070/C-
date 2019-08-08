#include <iostream>
using namespace std;
class area{
	int l,b;
	public:
		area(int x,int y)
		{
			l=x;
			b=y;
			cout<<"area of rectangle ="<<l*b;
		}
};
main()
{
	int l,b;
	cout<<"enter the length and breath of the rectangle"<<endl;
	cin>>l>>b;
	area obj (l,b);
}
