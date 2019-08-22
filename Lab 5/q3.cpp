#include <iostream>
using namespace std;
class student{
	public:
		int roll;
		void assign()
		{
			cout<<"Enter roll no:";
			cin>>roll;
		}
};
class Test:public student{
	public:
	int sub1,sub2;
	void mark()
	{
		cout<<"enter the marks in subject 1:";
		cin>>sub1;
		cout<<"enter the marks in subject 2:";
		cin>>sub2;
		cout<<endl<<endl;
	}
};
class Result:public Test{
	public:
		void display(){
			cout<"Details Information";
			cout<<"Roll no:"<<roll<<endl;
			cout<<"Marks in subject 1:"<<sub1<<endl<<"Marks in subject 2:"<<sub2<<endl;
			cout<<"The total marks obtained:"<<sub1+sub2;
		}
};
main()
{
	Result obj;
	obj.assign();
	obj.mark();
	obj.display();
}
