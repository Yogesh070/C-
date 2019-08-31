#include <iostream>
using namespace std;
class shape{
	public:
	int l,b,h,base;
	shape()
	{
		cout<<"enter the lenght ";
		cin>>l;
		cout<<"enter the breath";
		cin>>b;
		cout<<"enter the height";
		cin>>h;
		cout<<"enter the base";
		cin>>base;
	}
};
class rectangle:public shape{
	public:
	void display(){
		cout<<"Area of rectangle="<<l*b;
	}
};
class triangle:public shape{
	public:
	void display(){
			cout<<"Area of triangle="<<(b*h)/2;
	}
};
main()
{
	shape obj2;
	rectangle obj1;
	triangle obj3;
	obj1.display();
	obj3.display();
}
