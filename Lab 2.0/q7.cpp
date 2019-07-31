#include <iostream>
using namespace std;
#define pi 3.14
void area(int a, int b)
{
	cout<<"area of rectangle = "<<a*b<<endl;
}
void area(int a)
{
	cout<<"area of square = "<<a*a<<endl;
}
void area(float r)
{
	cout<<"area of circle = "<<pi*r*r<<endl;
}
main()
{
	int a,b;
	float r;
	cout<<"enter the length breath and radius respectively"<<endl;
	cin>>a>>b>>r;
	area(a,b);
	area(a);
	area(r);
}
