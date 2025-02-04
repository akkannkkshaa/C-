//static function
#include<iostream>
using namespace std;
class Abc
{
	public:
	static int a;
	static void set()
	{
		a++;
	}
	void display()
	{
		cout<<a<<endl;
	}
};
int Abc::a;
int main()
{
	Abc a1,a2,a3;
	a1.display();
	a2.display();
	a3.display();
	Abc::set();
	a1.display();
	a2.display();
	a3.display();
}
