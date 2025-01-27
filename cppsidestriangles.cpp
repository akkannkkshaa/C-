//14.Write a C program to input all sides of a triangle and check whether triangle is valid or not.
#include<iostream>
using namespace std;
int main()
{
	int s1,s2,s3;
	cout<<"Enter sides of a triangle=";
	cin>>s1>>s2>>s3;
	if(s1+s2>s3||s2+s3>s1||s1+s3>>s2)
	{
		cout<<"It is a valid Triangle";
	}
	else
	{
		cout<<"It is not a valid triangle";
	}
}
