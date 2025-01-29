//12.Display only those records whose ID is 2 by array of object
#include<iostream>
using namespace std;
class Abc{
	int id;
	string name;
	public: 
	void getdata();
	void display();
};

	void Abc::getdata()
	{
	cout<<"Enter id and name:";
	cin>>id>>name;
	}
	void Abc::display()
	{   
		if(id==2)
		{
		cout<<" "<<id;
		cout<<" "<<name;
		cout<<"\n";
		}
	}
	int main()
	{
		Abc a1[4];
		for(int i=0;i<4;i++)
		{
			a1[i].getdata();
		}
		for(int i=0;i<4;i++)
		{
			a1[i].display();
		}
		
	}
