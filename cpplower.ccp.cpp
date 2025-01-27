//c++ to check whether Uppercase or Lowercase
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter character=";
	cin>>ch;
	if(ch>='a'&&ch<='z')
	{
		cout<<"It is Lowercase";
	}
	else
	{
		cout<<"It is Uppercase";
	}
}
