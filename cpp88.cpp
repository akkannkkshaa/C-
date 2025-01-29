//11.Display only  those reco1rds whose last digits of mobile number is 88 with array of objects 
#include<iostream>
using namespace std;
class Abc
{
	public:
	int id;
	int mobile[10];
	void getdata();
	void display();
};
void Abc::getdata()
{
	cout<<"Enter details=";
	cin>>id>>mobile[10];
}
void Abc::display()
{
	if(mobile[10]%100==88)
	{
		cout<<"\nID="<<id<<" "<<"Mobile="<<mobile[10];
	}
}
int main()
{
	Abc a1[3];
	for(int i=0;i<3;i++)
	{
		a1[i].getdata();
	}
	for(int i=0;i<3;i++)
	{
		a1[i].display();
	}
}
