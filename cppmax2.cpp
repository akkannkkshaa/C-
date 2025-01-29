//10.find maximum between two numbers using class and object
#include<iostream>
using namespace std;
class Abc
{
	int a,b;
	public:
		void getdata()
		{
			cout<<"Enter numbers=";
			cin>>a>>b;
		}
		void check()
		{
			if(a>b)
			{
				cout<<"A is maximum";
			}
			else
			{
				cout<<"B is maximum.";
			}
		}
};
int main()
{
	Abc a1;
	a1.getdata();
	a1.check();
}
