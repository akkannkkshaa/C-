//13.Write a C++ program to input angles of a triangle and check whether triangle is valid or not.
#include<iostream>
using namespace std;
int main()
{
	int a1,a2,a3;
	cout<<"Enter angles of a triangle=";
	cin>>a1>>a2>>a3;
	if(a1+a2+a3==180)
	{
		cout<<"It is a valid Triangle";
	}
	else
	{
		cout<<"It is not a valid triangle";
	}
}
