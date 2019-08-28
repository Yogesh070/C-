#include <iostream>
using namespace std;
class shape{
	public:
	int l,b,h,base;
	void getdata()
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
	triangle obj2;
	rectangle obj1;
	obj1.getdata();
	obj1.display();
	obj2.getdata();
	obj2.display();
}
