#include<iostream>
using namespace std;
class Abc
{
	public:
		int a;
		void set()
		{
			a=5;
		}
		void display()
		{
			cout<<a<<endl
			;
		}
};
class Xyz:public Abc
{
	public:
		int b;
		void set1()
		{
			b=50;
		}
		void display1()
		{
			cout<<b;
		}
};
int main()
{
	Xyz x1;
	x1.set();
	x1.display();
	x1.set1();
	x1.display1();
}
