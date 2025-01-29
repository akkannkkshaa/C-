//C++ program for addition of two numbers.
#include<iostream>
using namespace std;
class Abc
{
	int a,b,res;
	public:
		void getdata()
		{
			cout<<"Enter numbers=";
			cin>>a>>b;
		}
		void add()
		{
			res=a+b;
		}
		void display()
		{
			cout<<"Sum="<<res;
		}
};
int main()
{
	Abc a1;
	a1.getdata();
	a1.add();
	a1.display();
}
