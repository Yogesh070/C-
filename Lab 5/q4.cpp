#include <iostream>
using namespace std;
class student{
	public:
		int roll_no;
		void getroll(){
			cout<<"Enter the roll no:";
			cin>>roll_no;
		}
		void show()
		{
			cout<<"Roll no:"<<roll_no<<endl;
		}
};
class Test:public student{
		public:
		int sub1,sub2;
		void input(){
		cout<<"enter the marks in subject 1:";
		cin>>sub1;
		cout<<"enter the marks in subject 2:";
		cin>>sub2;
		}
		void display()
		{
		cout<<"Marks in subject 1:"<<sub1<<endl<<"Marks in subject 2:"<<sub2<<endl;
		}
};
class Sport{
		public:
		int score1,score2;
		void input(){
		cout<<"enter the score in sports 1:";
		cin>>score1;
		cout<<"enter the score in sports 2:";
		cin>>score2;
		}
		void display()
		{
		cout<<"Score in sports 1:"<<score1<<endl<<"Score in sport 2:"<<score2<<endl;
		}
};
class Result:public Test, public Sport{
	public:
		void dis(){
			cout<<"Total Marks:"<<sub1+sub2<<endl;
			cout<<"Total Score:"<<score1+score2;
		}	
};
main()
{
	Result obj;
	obj.getroll();
	obj.Test::input();
	obj.Sport::input();
	cout<<endl<<endl<<"******************DETAIL INFORMATION*********************"<<endl;
	obj.show();
	obj.Test::display();
	obj.Sport::display();
	obj.dis();
	
}
