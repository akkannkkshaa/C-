//15.Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include<iostream>
using namespace std;
int main()
{
	int a1,a2,a3;
	cout<<"Enter angles=";
	cin>>a1>>a2>>a3;
	if(a1+a2+a3==180)
	{
		if(a1==a2 && a2==a3 && a1==a3)
		{
			cout<<"it is an equilateral triangle";
		}
		else if(a1==a2||a1==a3||a2==a3)
		{
			cout<<"it is an isosceles triangle";
		}
		else
		{
			cout<<"it is a scalene triangle";
		}
	}
	else
	{
		cout<<"it is not a valid triangle";
	}
}
