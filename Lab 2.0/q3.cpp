#include <iostream>
using namespace std;
int convert(int f)
{
	return (f-32)*5/9;
}
main()
{
	int f;
	cout<<"enter the temperature in farenhiet"<<endl;
	cin>>f;
	cout<<"the equivalent temperature in centigrade is "<<convert(f);
}
