#include <iostream>
using namespace std;
#define pi 3.14
void volume(int h, int r)
{
	cout<<"Volume of cylinder = "<<pi*r*r*h<<endl;
}
void volume(int l)
{
	cout<<"Volume of cube = "<<l*l*l<<endl;
}
void volume(int l,int b ,int h)
{
	cout<<"Volume of cuboid = "<<l*b*h<<endl;
}
main()
{
	int l,b,h,r;
	cout<<"enter the length breath height and radius respectively"<<endl;
	cin>>l>>b>>h>>r;
	volume(l,b,h);
	volume(l);
	volume(h,r);
}
