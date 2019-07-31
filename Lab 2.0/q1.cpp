#include <iostream>
using namespace std;
int multiply(int a,int b)
{
	return a*b;
}
main()
{
	int a,b;
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	cout<<"the multiplied value is "<<multiply(a,b);
}
