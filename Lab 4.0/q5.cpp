#include  <iostream>
using namespace std;
class copy1{
	int a;
	public:
		copy1(int a){
			this ->a=a;
			cout<<"area of sq ="<<a*a<<endl;
		}
		copy1(copy1 &x){
			a=x.a;
			cout<<"area of sq ="<<a*a<<endl;
		}
};
main()
{
	int a;
	cout<<"enter the length of square"<<endl;
	cin>>a;
	copy1 obj(a);
	copy1 obj2(obj);
}
