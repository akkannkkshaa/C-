//11.c++ program to accept two items weight (floating point values) and number of purchase(float values)and calculate average value of items
#include<iostream>
using namespace std;
int main()
{
	float w1,w2,P,Av;
	cout<<"Enter weight of item 1 and 2=";
	cin>>w1>>w2;
	cout<<"No. of purchase=";
	cin>>P;
	Av=(w1+w2)/P;
	cout<<"Average="<<Av;
}
