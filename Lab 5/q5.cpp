#include <iostream>
using namespace std;
class shape{
	public:
	int l,b,h;
	shape()
	{
		cout<<"enter the lenght ";
		cin>>l;
		cout<<"enter the breath";
		cin>>b;
		cout<<"enter the height";
		cin>>h;

	}
};
class rectangle:public shape{
	public:
	rectangle(){
		cout<<"Area of rectangle="<<l*b<<endl;
	}
};
class triangle:public shape{
	public:
	triangle(){
			cout<<"Area of triangle="<<(b*h)/2;
	}
};
main()
{
	rectangle obj1;
	triangle obj2;
}
