//static data member
#include<iostream>
using namespace std;
class Abc
{
	public:
	static int a;
	void set()
	{
		a++;
	}
	void 
	display()
	{
		cout<<a;
	}
};
int Abc::a;
int main()
{
	Abc a1,a2,a3;
	a1.display();
	a2.display();
	a3.display();
	a2.set();
	a1.display();
	a2.display();
	a3.display();
}
