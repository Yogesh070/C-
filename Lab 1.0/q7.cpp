#include <iostream>
using namespace std;
#define pi 3.14
float area()
	{
		int r;
		cout<<"enter the radius"<<endl;
		cin>>r;
		return pi*r*r;
	}
main()
{
	cout<<"the area of circle ="<<area();
}
