//4.find number is even or odd using class and object
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
			if(n%2==0)
			cout<<"The number is Even.";
			else
			cout<<"The number is Odd.";
		}
};
int main()
{
	Abc a1;
	a1.getdata();
	a1.check();
}
