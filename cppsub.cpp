//C++ program for subtraction of two numbers.
#include<iostream>
using namespace std;
class Abc
{
	int a,b,c;
	public:
		void getdata()
		{
			cout<<"Enter numbers=";
			cin>>a>>b;
		}
		void Sub()
		{
			c=a-b;
			cout<<"Subtraction="<<c;
		}
};
int main()
{
	Abc a1;
	a1.getdata();
	a1.Sub();
}
