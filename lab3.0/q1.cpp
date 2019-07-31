#include <iostream>
using namespace std;
#define pi 3.14
class circle{
	int r;
	public:
	void getradius()
	{
		cout<<"enter the radius of circle\n";
		cin>>r;
	}
	void printarea()
	{
		cout<<"area of circle = "<<pi*r*r;
	}
};
int main()
{
	circle obj;
	obj.getradius();
	obj.printarea();
}
