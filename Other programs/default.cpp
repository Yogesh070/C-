#include <iostream>
#include <conio.h>
using namespace std;
class si{
	float p,t,r,i;
	public:
	void intrest(float p, float t, float r=8)
	{
		i=(p*t*r)/100;
		cout<<"The simple intrest is : "<<i<<endl;
	}
};
int main()
{
	si obj;
	float p,t,r;
	int a,i;
	for(i=1;i<=3;i++){
		cout<<"Details of person"<<i<<endl;
		cout<<"Enter the principal amount"<<endl;
		cin>>p;
		cout<<"Enter the time in years:"<<endl;
		cin>>t;
		obj.intrest(p,t);
		cout<<"Do you want to change rate?"<<endl<<"press 0 to change rate or press others"<<endl;
		cin>>a;
		if(a==0){
				cout<<"Enter the rate"<<endl;
		cin>>r;
		obj.intrest(p,t,r);
				}
				else
				cout<<"Thankyou"<<endl;
			}
}
