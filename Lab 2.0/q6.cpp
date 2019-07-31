#include <iostream>
using namespace std;
//fncn overloading
void multiply(int a, int b)
{
	cout<<"multiply a*b = "<< a*b<<endl;
}
void multiply(int a, int b,int c)
{
	cout<<"multiply a*b*c = "<< a*b*c<<endl;
}
void multiply()
{
	int a,b,c;
	cout<<" multiply = "<< a*b*c;
}
main()
{
	int a,b,c;
	cout<<"enter three numbers a b c respectively"<<endl;
	cin>>a>>b>>c;
	multiply(a,b);
	multiply(a,b,c);
	multiply();
}

