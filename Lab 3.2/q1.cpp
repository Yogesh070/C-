#include <iostream>
using namespace std;
class xyz;
class abc{
	int a;
	public:
	void input1()
	{
	cout<<"enter a number";
	cin>>a;
	}
	friend void greatest(xyz x,abc y);
};
class xyz{
	int b;
	public:
	void input()
	{
	cout <<"enter another no";
	cin>>b;	
	}
	friend void greatest(xyz x,abc y);
};
void greatest(xyz x,abc y)
{
	if(x.b>y.a)
	cout<<"the greatest no is"<<x.b;
	else
	cout<<"the greatest no is"<<y.a;
}
main()
{
	xyz obj;
	abc obj1;
	obj.input();
	obj1.input1();
	greatest(obj,obj1);
};
