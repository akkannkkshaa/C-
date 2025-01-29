//5.find number is positive or negative using class and object
#include<iostream>
using namespace std;
class Abc
{
	int n;
	public:
		void getdata()
		{
			cout<<"Enter n=";
			cin>>n;
		}
		void check()
		{
			if(n>0)
			cout<<"The number is Positive.";
			else
			cout<<"The number is Negative.";
		}
};
int main()
{
	Abc a1;
	a1.getdata();
	a1.check();
}
