#include <iostream>
using namespace std;
class prime {
	int a,i,count;
	public:
	void check(){
	cout<<"enter a number to check wheather it is prime or not"<<endl;
	cin>>a;
	while(a=0)
	{
		if(a%i==0){
		count=count+1;
		}
		a--;
	}
	if(count>2)
	cout<<a<<" is not prime ";
	else
	cout<<a<<" is prime ";
	}
};
main()
{
	prime obj;
	obj.check();
}
