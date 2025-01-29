//6.Reverse a given number using class and object
#include<iostream>
using namespace std;
class Abc
{
	int n,rev,r;
	public:
		void getdata()
		{
			cout<<"Enter number=";
			cin>>n;
		}
		void reverse()
		{
			while(n>0)
			{
			r=n%10;
			rev=(rev*10)+r;
			n=n/10;
		    }
		    cout<<"Reverse="<<rev;
		}
};
int main()
{
	Abc a1;
	a1.getdata();
	a1.reverse();
}
