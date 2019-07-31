#include <iostream>
#include <math.h>
using namespace std;
class math{
	int x,y;
	public:
		void cal(){
			cout<<"enter the value of x and y"<<endl;
			cin>>x>>y;
			cout<<" x power to y = "<<pow(x,y);
		}
};
main()
{
	math obj;
	obj.cal();
}
