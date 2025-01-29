//8.find number is armstrong or not using class and object.
#include<iostream>
#include<math.h>
using namespace std;
class Abc
{
	int n,org,temp,count=0,rem,sum=0;
	public:
		void getdata()
		{
			cout<<"Enter number=";
			cin>>n;
			org=n;
			temp=n;
		}
		void check()
		{
			while(temp>0)
			{
				temp=temp/10;
				count++;
			}
			temp=n;
			while(temp>0)
			{
				rem=temp%10;
				sum=sum+pow(rem,count);
				temp=temp/10;
			}
			if(org==sum)
			{
				cout<<"The number is an Armstrong number.";
			}
			else
			{
				cout<<"The number is not an Armstrong number.";
			}
		}
};
int main()
{
	Abc a1;
	a1.getdata();
	a1.check();
}
