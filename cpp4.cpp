//array of object
#include<iostream>
using namespace std;
class Abc
{
	public:
	int id;
	char name[20];
	char mobile[10];
	void set();
	void display();
};
void Abc::set()
{
	cout<<"Enter details:";
	cin>>id>>name>>mobile;
}
void Abc::display()
{
	cout<<"\nID="<<id<<"\nName="<<name<<"\nMobile="<<mobile;
}
int main()
{
	Abc a1[3];
	for(int i=0;i<3;i++)
	{
		a1[i].set();
	}
	for(int i=0;i<3;i++)
	{
		a1[i].display();
	}
}
