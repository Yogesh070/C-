#include <iostream>
using namespace std;
inline largest (int a, int b , int c)
{
	if(a>b && a>c)
	return a;
	else if(b>a && b>c)
	return b;
	else
	return c;
}
main()
{
	int a,b,c;
	cout<<"enter three numbers"<<endl;
	cin>>a>>b>>c;
	cout<<"the greatest number among three input no. is "<<largest(a,b,c);
}
