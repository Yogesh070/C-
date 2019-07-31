#include <iostream>
using namespace std;
class alpha{
	int x;
	public:
		void setvalue()
		{
			cout<<"enter no.";
			cin>>x;
		}
		
	friend class beta;
};
class beta{
	public:
		void display(alpha a)
		{
			cout<<"x="<<a.x;
		}
};
main()
{
	alpha a;
	beta b;
	a.setvalue();
	b.display(a);
}
