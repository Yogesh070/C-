#include <iostream>
using namespace std;
class student{
	public:
		int roll;
		void getdata(){
			cout<<"Enter your roll no:";
			cin>>roll;
		}
		void display(){
			cout<<"Roll no"<<roll<<endl;
		}
};
class Theory:public student{
	public:
		int mark_t;
	void assign_t(){
		cout<<"Enter your theory marks";
		cin>>mark_t;
	}
	void show_t()
	{
		cout<<"Your obtained theory marks:"<<mark_t<<endl;
	}
};
class Practical:public student{
		public:
		int mark_p;
	void assign_p(){
		cout<<"Enter your practical marks";
		cin>>mark_p;
	}
	void show_p()
	{
		cout<<"Your obtained practical marks:"<<mark_p<<endl;
	}	
};
class Result:public Theory,public Practical{
	public:
	void display(){
	cout<<"The final marks obtained :"<<mark_t+mark_p;	
	}
};
main()
{
	Result obj;
	obj.Theory::getdata();
	obj.assign_t();
	obj.assign_p();
	cout<<"***************Student Info******************"<<endl;
	obj.show_p();
	obj.show_t();
	obj.display();
}
