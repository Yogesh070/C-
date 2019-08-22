#include <iostream>
using namespace std;
class room{
	public:
	int length,breath;
	int area(){
		return length*breath;
	}
};
class BedRoom:public room{
	int height;
	public:
		int setData(int a ,int b,int c)
		{
		length=a;
		breath=b;
		height=c;	
		}
	int volume()
	{
		return length*breath*height;
	}
	
};
main()
{
	BedRoom obj1;
	int length,breath,height;
	cout<<"Enter the length"<<endl;
	cin>>length;
	cout<<"Enter the breath"<<endl;
	cin>>breath;
	cout<<"Enter the height"<<endl;
	cin>>height;
	obj1.setData(length, breath,height);
	cout<<"area of the room"<<obj1.area()<<endl;
	cout<<"volume of the room:"<<obj1.volume();

}
