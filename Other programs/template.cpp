#include <iostream>
using namespace std;
template <class T>
class demo{
	T x;
	public:
		demo(T p)
		{
			x=p;	
		}
		void show()
		{
			cout<<""<<x<<endl;
		}
};
int main()
{
	demo<char*>p1("gces");
	p1.show();
	demo<char*>p2("A");
	p2.show();
	demo<int>p3(15);
	p3.show();
	demo<float>p(13.15);
	p.show();
}
