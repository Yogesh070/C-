#include <iostream>
using namespace std;
class square{
	int l;
	public:
	void getlength()
		{
		cout<<"enter the length\n";
		cin>>l;	
		}
	void printarea()
	{
		cout<<"area of square = "<<l*l<<endl;
	}
		void printperimeter()
	{
		cout<<"perimeter of square = "<<4*l;
	}
};
int main()
{
	square obj;
	obj.getlength();
	obj.printarea();
	obj.printperimeter();
}
