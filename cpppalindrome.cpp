//7 .find number is palindrome or not using class and object .
#include<iostream>
using namespace std;
class Abc
{
	int n,rev1,r,org;
	public:
		void getdata()
		{
			cout<<"Enter number=";
			cin>>n;
			org=n;
		}
		void check()
		{
			while(n>0)
			{
				r=n%10;
				rev=(rev*10)+r;
				n=n/10;
			}
			if(rev==org)
			{
				cout<<"The number is a Palindrome.";
			}
			else
			{
				cout<<"The number is not a palindraome.";
			}
		}
};
int main()
{
	Abc a1;
	a1.getdata();
	a1.check();
}
