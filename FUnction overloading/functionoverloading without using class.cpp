#include <iostream>
#define pi 3.14
using namespace std;
void area_51(int a , int b);
void area_51(double l, double c);
	void area_51(double r);
main()
{
	int a,b;
	double l,c,r;
		cout<<"enter the lenght and breath of rectangle"<<endl;
		cin>>a>>b;
		area_51(a,b);
		cout<<"enter the lenght and height of triangle"<<endl;
		cin>>l>>c;
		area_51(l,c);
		cout<<"eneter the radius of circle"<<endl;
		cin>>r;
		area_51(r);
}
	void area_51(int a , int b)
	{
		float areas;
		areas=a*b;
		cout<<"area of rectangle="<<areas<<endl;	
	}
	void area_51(double l, double c)
	{
		float areas;
		areas=(l*c)/2;
		cout<<"area of triangle="<<areas<<endl;	
	}
	void area_51(double r)
	{
		float areas;
		areas=pi*r*r;
		cout<<"area of circle="<<areas<<endl;	
	}

