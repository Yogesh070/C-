#include <iostream>
using namespace std;
class employee{
	public:
		int salary;
		char eid[20];
	employee(){
		cout<<"Enter the employee name:";
		cin>>eid;
		cout<<"enter the salary:";
		cin>>salary;
	}
};
class company{
	employee obj;
	public:
		char company_name[20], location[20];
		void info(){
			cout<<"enter the company name:";
			cin>>company_name;
			cout<<"enter the location:";
			cin>>location;
		}
		void display(){
			cout<<"COMPANY NAME:"<<company_name<<endl;
			cout<<"LOCATION:"<<location<<endl;
			cout<<"EMPLOYEE NAME"<<obj.eid<<endl;
			cout<<"SALARY:"<<obj.salary;
		}
};
main()
{
	company obj2;
	obj2.info();
	obj2.display();
}
