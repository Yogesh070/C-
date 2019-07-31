#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
inline int cube (int a)
{
	cout <<"cube=" << pow(a,3);
}
main()
{
	int x;
	cout <<"enter a no.";
	cin>>x;
	cube(x);

}
