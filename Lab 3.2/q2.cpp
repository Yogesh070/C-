#include <iostream>
using namespace std;
class sample{
	int a,b;
	public:
		void input()
		{
			cout<<"enter a numbers two numbers "<<endl;
			cin>>a>>b;
		}
		friend void mean(sample x);
};
main()
{
	sample obj;
	obj.input();
	mean(obj);
		
}
void mean(sample x)
{
	cout<<"the mean is "<< (x.a+x.b)/2;
}
