//c++ to check whether it is alphabet , digit or special character
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter character=";
	cin>>ch;
	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
	{
		cout<<"It is an alphabet";
	}
	else if(ch>='0'&&ch<='9')
	{
		cout<<"It is a digit";
	}
	else
	{
		cout<<"It is a special character";
	}
}
