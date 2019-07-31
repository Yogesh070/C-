#include <iostream>
using namespace std;
class area{
	int l,b;
	public:
		void getarea()
		{
			cout<<"enter the length and breath"<<endl;
			cin>>l>>b;
			cout<<"the area is "<<l*b;
		}
};
main()
{
	area obj;
	obj.getarea();
}
