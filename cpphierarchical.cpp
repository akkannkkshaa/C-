#include<iostream>
using namespace std;
class one
{
	public:
		int a;
		void set()
		{
			a=10;
		}
		void display()
		{
			cout<<a;
		}
};
class two:public one
{
	public:
		int b;
		void set1()
		{
			b=12;
		}
		void display1()
		{
			cout<<b;
		}
};
class three:public one
{
	public:
		int c;
		void set2()
		{
			c=15;
		}
		void display2()
		{
			cout<<c;
		}
};
int main()
{
	two ob1;
	ob1.set();
	ob1.set1();
	ob1.display();
	ob1.display1();
	three ob2;
	ob2.set();
	ob2.set2();
	ob2.display();
	ob2.display2();
}
