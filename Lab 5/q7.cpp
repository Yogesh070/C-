#include <iostream>
using namespace std;
class student{
	public:
	char name[20];
	int roll_no;
	void getinfo(){
		cout<<"Enter the name of the student:";
		cin>>name;
		cout<<"Enter the roll no:";
		cin>>roll_no;
	}
};
class Marks{
	public:
	float oop,pm,bc,acc,fin;
	void data()
	{
	cout<<"Enter the marks in oop,pm,bc,acc,fin ";
	cin>>oop>>pm>>bc>>acc>>fin;
	}	

};
class Result:public student,public Marks{
	public:
		int total=0;
	void display(){
		total=oop+pm+bc+acc+fin;
		cout<<"\n\n\ *************STUDENT INFORAMTION******************\n";
		cout<<"NAME:"<<name<<endl;
		cout<<"ROLL NO:"<<roll_no<<endl;
		cout<<"PERCENTAGE:"<<total/5<<"%"<<endl;
		cout<<"Total marks obtained:"<<total;	
	}

};
main()
{
	Result obj;
	obj.getinfo();
	obj.data();
	obj.display();
	
}
