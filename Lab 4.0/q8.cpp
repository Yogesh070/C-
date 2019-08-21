#include <iostream>
using namespace std;
class person {
	int age,c_n;
	char name[20],address[20];
	public:
	person(){
		cout<<"enter the name:";
		cin>>name;
		cout<<"enter the age:";
		cin>>age;
		cout<<"Enter the address:";
		cin>>address;
		if(age>16)
		{
			cout<<"enter citizenship no:";
			cin>>c_n;
		}
		else 
		c_n=0;
	}
	void display(){
	cout<<"***************Person Details*******************"<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Age:"<<age<<endl;
	cout<<"Address"<<address<<endl;
	cout<<"Citizenship number :"<<c_n;
	}
};
main()
{
	person obj;
	obj.display();
}
