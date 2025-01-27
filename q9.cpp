//C++ program to convert specified days into years, weeks and days.
#include<iostream>
using namespace std;
int main()
{
	int D,Y,W,days;
	cout<<"Enter days=";
	cin>>days;
	Y=days/365;
	W=(days%365)/7;
	D=(days%365)%7;
	cout<<"Year="<<Y<<"\nWeeks="<<W<<"\nDays="<<D;
}
