#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class cube
{
	int a;
	public:
		void setvalue(int x)
		{
			a=x;
		}
		void  findcube()
{
		cout <<"cube=" << a*a*a;
}
};


main()
{
	cube obj;
	int a;
	cout <<"enter a no.";
	cin>>a;
	obj.setvalue(a);
	obj.findcube();

}
