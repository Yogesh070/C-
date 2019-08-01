#include <iostream>
using namespace std;
class employee
{
	long int employee_phone;
	double salary, net_salary,tax;
	char employee_name[20],employee_addresss[25];
	int calculate()
	{
	    return	net_salary=salary-(tax*(salary/100));
	}
	public:
		void input()
	{
			cout<<"Enter the  Employee name:"<<endl;
			cin>>employee_name;
			cout<<"Enter the salary:"<<endl;
			cin>>salary;
			cout<<"Enter the employee addresss:"<<endl;
			cin>>employee_addresss;
			cout<<"Enter the tax percentage:"<<endl;
			cin>>tax;
	}
	void output()
	{
		cout<<"================Employee info================="<<endl;
			cout<<"Employee name:"<<employee_name<<endl;
			cout<<"Salary:"<<salary<<endl;
			cout<<"Employee addresss:"<<employee_addresss<<endl;
			cout<<"Tax percentage:"<<tax<<endl;
			cout<<"the net salary is:"<<calculate()<<endl;
	}
};
main()
{
	employee obj;
	obj.input();
	obj.output();
}
