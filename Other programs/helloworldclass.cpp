#include <iostream>
using namespace std;
class display{
	private: int a;
	public: int b;
	void show()
	{
		cout <<"hello world\n";
		a=5;
		cout <<a << "\n";
		cout<<b;
	}
};
int main()
{
	
	display d1;
		d1.b=10;
	d1.show();

	
}
