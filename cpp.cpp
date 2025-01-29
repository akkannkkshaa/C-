#include<iostream>
using namespace std;
class Abc
{
	int a=10;
	int b=10;
	public:
		void display()
		{
			cout<<a<<b;
		}
};
int main()
{
	Abc a1;
	a1.display();
}
