#include <iostream>
using namespace std;
class mountain{
	int height;
	string name,location;
	public:
		mountain(string x,int y ,string z){
			name=x;
			height=y;
			location=z;
		}
		void displayInfo()
		{
			cout<<"The information of the heighest mountain is"<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"height:"<<height<<endl;
			cout<<"location:"<<location<<endl;		
		}
		void CmpHeight(mountain obj2)
		{
			if (height>obj2.height) 
			displayInfo();
			else
			obj2.displayInfo();
		}
};
main()
{
	mountain obj1("Everest",8848,"Sagarmathas");
	mountain obj2("Machapuchhre",8548,"Nepal");
	obj1.CmpHeight(obj2);
}
