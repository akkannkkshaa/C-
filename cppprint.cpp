//9 .print 1 to n number using class and object.
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
		void display()
		{
			for(int i=1;i<=n;i++)
			{
				cout<<i<<" ";
			}
		}
};
int main()
{
	Abc a1;
	a1.getdata();
	a1.display();
}
