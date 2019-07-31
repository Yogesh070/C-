#include <iostream>
using namespace std;
class greatest{
	int a,b;
	public:
	void great(){
		cout<<"enter two numbers"<<endl;
		cin>>a>>b;
		if(a>b)
		cout<<"the greatest no is"<<a;
		else
		cout<<"the greatest no is"<<b;
	}
};
 main()
 {
 	greatest obj;
 	obj.great();
 }
