#include <iostream>
#include <conio.h>
using namespace std;

class rectangle{
	public:
		int length,breath,area;
		void readdata()
		{
			cout<<"enter the length and breath";
			cin>>length>>breath;
			area=length*breath;
		}
		void displaydata()
		{
			
			cout<<"the area of rectangle is " <<area;
		}
};
 
 int main()
 {
  rectangle o1,o2;
 o1.readdata();
 o1.displaydata();
  o2.readdata();
 o2.displaydata();	
 
 }
