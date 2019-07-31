#include <iostream>
using namespace std;
class beta;//forward declaration
class alpha{
	int alphadata;
	public:
		void setalpha()
		{
			cout<<"enter no"<<endl;
			cin>>alphadata;
		}
		friend void sum(alpha a, beta b);
};
class beta{
	int betadata;
	public:
		void setbeta()
		{
			cout<<"enter no ";
			cin>>betadata;
		}
		friend void sum(alpha a, beta b);
};
void sum(alpha a, beta b)
{
	cout<<"sum="<<a.alphadata+b.betadata;
}
main()
{
	alpha x;
	x.setalpha();
	beta y;
	y.setbeta();
	sum(x,y);
}
