#include <iostream>
using namespace std;
inline float convert(int p)
{
	return p*0.453592;
}
main()
{
	int p;
	cout<<"enter the weigth in pounds"<<endl;
	cin>>p;
	cout<<"the equivalent weight in kilograms is "<<convert(p);
}
