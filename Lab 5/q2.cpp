#include <iostream>
using namespace std;
class class1{
	public:
		int a;
		void func1(){
		cout<<"Enter first number:";
		cin>>a;
		}
};
class class2{
	public:
		int b;
		void func2(){
		cout<<"Enter second number:";
		cin>>b;
		}
};
class class3:public class1, public class2{
	public:
	void sum(){
		cout<<"The sum of two numbers:"<<a+b;
	}
};
main()
{
	class3 obj;
	obj.func1();
	obj.func2();
	obj.sum();
}
