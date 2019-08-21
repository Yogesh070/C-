#include <iostream>
using namespace std;
class two;
class one{
	int a;
	public:
		void input1()
		{
			cout<<"enter the first no";
			cin>>a;
		}
		friend int swap(one x,two y);
};
class two{
	int b;
	public:
		void input2()
		{
			cout<<"enter the second no";
			cin>>b;
		}
		friend int swap(one x,two y);
};
main()
{
	one obj1;
	two obj2;
	obj1.input1();
	obj2.input2();
	swap(obj1,obj2);
}
int swap(one x, two y)
{
	int temp;
	temp=x.a;
	x.a=y.b;
	y.b=temp;
	cout<<"the value after swapping "<<x.a <<"  "<<y.b;
}
