#include<iostream>
using namespace std;
class one
{
	public:
	int a;
};
class two:public one
{
	public:
	int b;
};
class three:public two
{
	public:
		int c;
		void set()
		{
			a=10;b=19;c=18;
		}
		void display()
		{
			cout<<a<<b<<c;
		}
};
int main()
{
	three t1;
	t1.set();
	t1.display();
}

