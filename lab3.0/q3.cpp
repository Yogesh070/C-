#include <iostream>
using namespace std;
class large{
	int a,b;
	public:
		void get()
		{
		cout<<"enter the two numbers\n";
		cin>>a>>b;	
		}
	void largest()
	{
		if(a>b)
		a=a;
		else
		a=b;
	}
		void put()
	{
		cout<<"the largest no is "<<a<<endl;
	}
};
int main()
{
	large obj;
	obj.get();
	obj.largest();
	obj.put();
}
