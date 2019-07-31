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
	cout<<"the power of "<<n<<" raised to 2 is "<<power(n);
}
