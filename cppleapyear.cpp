//c++ to check whether a year is leap or not.
#include<iostream>
using namespace std;
int main()
{
	int y;
	cout<<"ENter year=";
	cin>>y;
	if(y%4==0)
	{
		cout<<"The year is a leap year";
	}
	else
	{
		cout<<"The year is not a leap year";
	}
}
