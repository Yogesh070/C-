#include <iostream>
using namespace std;
class time{
	int hr,min,sec;
	public:
		time()
		{
			hr=0;
			min=0;
			sec=0;
			cout<<"Time :"<<hr<<":"<<min<<":"<<sec;
		}
		time(int x,int y,int z)
		{
			hr=x;
			min=y;
			sec=z;
			cout<<"Time :"<<hr<<":"<<min<<":"<<sec;
		}
};
main()
{
	int hr,min,sec;
	cout<<"enter time in format of hr-min-sec"<<endl;
	cin>>hr>>min>>sec;
 	time obj;
	time obj3(hr,min,sec);	
}
