//c++ check whether number is divisible by 5 and 11 or not.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n=";
	cin>>n;
	if(n%5==0&&n%11==0)
	{
		cout<<"number is divisible by 5 and 11";
	}
	else
	{
		cout<<"Number is not divisible by 5 and 11";
	}
}
