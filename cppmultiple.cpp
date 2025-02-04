#include<iostream>
using namespace std;
class One
{
	public:
		int a;
};
class Two
{
	public:
		int b;
};
class Three : public One , public Two
{
	public:
		int c;
		void set()
		{
			a=5;b=10;c=15;
		}
		void display()
		{
			cout<<a<<" "<<b<<" "<<c;
		}
};
int main()
{
	Three t1;
	t1.set();
	t1.display();
}

