//3.multiplication of two numbers using class and object 
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
		void Multiply()
		{
			c=a*b;
			cout<<"Multiplication="<<c;
		}
};
int main()
{
	Abc a1;
	a1.getdata();
	a1.Multiply();
}
