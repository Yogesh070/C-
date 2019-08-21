#include <iostream>
using namespace std;
class intrest{
	int p,t,r;
	public:
	intrest(int p, int t,int r=2)
	{
		this ->p=p;
		this ->t=t;
		this ->r=r;
		cout<<(p*t*r)/100<<endl;
		
	}
};
main()
{
	int p,t,r;
	cout<<"enter the principal amount"<<endl;
	cin>>p;
	cout<<"enter the time"<<endl;
	cin>>t;
	cout<<"enter the rate"<<endl;
	cin>>r;
	cout<<"simple intrest in default rate(i.e 2%) is ";
	intrest obj (p,t);
	cout<<"simple intrest in input rate is ";
	intrest obj1 (p,t,r);
}
