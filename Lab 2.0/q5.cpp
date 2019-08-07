#include <iostream>
using namespace std;
#include <math.h>
int power(int n, int m=2)
{
	return pow(n,m);
}
main()
{
	int n,m;
	cout<<"enter a number ";
	cin>>n;
	cout<<"enter power ";
	cin>>m;
	cout<<"the power of "<<n<<" raised to default (i.e 2) is "<<power(n)<<endl
	;
	cout<<"the power of "<<n<<" raised to input power is "<<power(n,m);
}
