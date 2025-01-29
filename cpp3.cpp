//C++ program for addition of two numbers using scope resolution operator.
#include<iostream>
using namespace std;
class Abc
{
	int a,b,res;
	public:
		void getdata();
		void add();
		void display();
};
		void Abc::getdata()
		{
			cout<<"Enter numbers=";
			cin>>a>>b;
		}
		void Abc::add()
		{
			res=a+b;
		}
		void Abc::display()
		{
			cout<<"Sum="<<res;
		}

int main()
{
	Abc a1;
	a1.getdata();
	a1.add();
	a1.display();
}
