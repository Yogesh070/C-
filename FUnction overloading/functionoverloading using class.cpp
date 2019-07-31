#include <iostream>
#include <conio.h>
#define pi 3.14
using namespace std;
class area{
	float areas;
	public:
	void area_51(int a , int b);
	void area_51(double l, double c);
	void area_51(double r);
};

void area :: area_51(int a, int b)
{
		areas=a*b;
		cout<<"area of rectangle="<<areas<<endl;
}
void area :: area_51(double l, double c)
{
		areas=(l*c)/2;
		cout<<"area of triangle="<<areas<<endl;
}
void area :: area_51(double r)
{
		areas=pi*r*r;
		cout<<"area of circle="<<areas<<endl;
}

main()
{
	int a,b;
	double l,c,r;
		area obj;
		cout<<"enter the lenght and breath of rectangle"<<endl;
		cin>>a>>b;
		obj.area_51(a,b);
		cout<<"enter the lenght and height of triangle"<<endl;
		cin>>l>>c;
		obj.area_51(l,c);
		cout<<"eneter the radius of circle"<<endl;
		cin>>r;
		obj.area_51(r);
		
		
}
