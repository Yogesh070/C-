#include <iostream>
using namespace std;
class complex{
	int a,i1,b,i2,s,si;
	public:
	complex(){
	cout<<"enter first complex number first part and then imaginery respectively:";
	cin>>a>>i1;
	cout<<"enter second complex number first part and then imaginery respectively:";
	cin>>b>>i2;
	}
	 void add(){
	 	s=a+b;
	 	si=i1+i2;
	 	cout<<"the added complex no is:"<<s<<"+"<<"i"<<si;
	 }
};
main()
{
	complex obj;
	obj.add();
}
