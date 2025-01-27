//c++ to check whether it is vowel or consonant
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter alphabet=";
	cin>>ch;
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		cout<<"The alphabet is a vowel";
	}
	else
	{
		cout<<"The alphabet is a Consonant";
	}
}
