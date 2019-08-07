#include <iostream>
using namespace std;
class cricket
{
	int runs, four,six;
	char name[20];
	public:
	void getinfo()
	{
			cout<<"Enter the name of the batsman"<<endl;
			cin>>name;
			cout<<"Enter the no of runs scored"<<endl;
			cin>>runs;
			cout<<"Enter the no of six scored"<<endl;
			cin>>six;
			cout<<"Enter the no of four"<<endl;
			cin>>four;
	}
	void display(){
			cout<<"Name:"<<name<<endl;
			cout<<"Runs scored"<<runs<<endl;
			cout<<"No of six:"<<six<<endl;
			cout<<"No of four:"<<four<<endl<<endl;
		
	}
};
int main()
{
int i;
cricket obj[10];
	for (i=0;i<=4;i++)
	{
	obj[i].getinfo();
	}
	for (i=0;i<=4;i++)
	{
	cout<<"====================Batsman info=============================="<<endl;
	obj[i].display();
	}
			
}
