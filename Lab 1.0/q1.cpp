#include <iostream>
using namespace std;
class add{
	int a,b,c;
	public:
	int addition()
	{
		cout<<"enter two numbers";
		cin >> a >> b;
		c=a+b;
		cout<<"the sum of the two digits is " <<c;
	}
};
main()
{
	add ad;
	ad.addition();
}
