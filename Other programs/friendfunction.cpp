#include <iostream>
using namespace std;
//friend function//
class sample{
	int a,b;
	public:
		void setvalue()
		{
			a=5;
			b=4;
		}
void dis(){
	cout<<a<<endl;
}
friend void sum(sample s)
{
	int c;
	c=s.a+s.b;
	cout<<"the sum is ="<<c;
}
};
int main()
{
	sample x;
	x.setvalue();
	sum(x);
	x.dis();
}
