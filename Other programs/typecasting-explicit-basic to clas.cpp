#include <iostream>
using namespace std;
class convert{
	int f,i;
	public:
		convert(float a)
		{
			f=a;
			i=12*(a-f);
			cout<<"feet:"<<f<<"\tinch:"<<i;	
		}
};
main()
{
	float d;
	cout<<"Enter the distance to convert:";
	cin>>d;
	convert obj=d;
}
