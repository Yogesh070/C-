#include <iostream>
using namespace std;
class time{
	int hr,min,sec;
	public:
		void gettime()
		{
			cout<<"Enter time in format of hr-min-sec"<<endl;
			cin>>hr>>min>>sec;
		}
		void display()
		{
			cout<<"Time:"<<hr<<"hr:"<<min<<"min:"<<sec<<"sec"<<endl;
		}
		void sum(time t1,time t2);
};
void time::sum(time t1, time t2)
{
	sec=t1.sec+t2.sec;
	min=sec/60+t1.min+t2.min;
	sec=sec%60;
	hr=min/60+t1.hr+t2.hr;
	min=min%60;
	
}
main()
{
	time t1,t2,t3;
	t1.gettime();
	t1.display();
	t2.gettime();
	t2.display();
	t3.sum(t1,t2);
	cout<<"The total time after adding"<<endl;
	t3.display();
}
