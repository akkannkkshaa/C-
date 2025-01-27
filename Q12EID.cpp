//12.C++ program that accepts an employee's ID,total work hours of a month and amount it received per hour. Print employee ID and salary(with 2 decimal places)of a particular month.
#include<iostream>
using namespace std;
int main()
{
	int EID;
	float S,hrs,amt;
	cout<<"Enter EID=";
	cin>>EID;
	cout<<"Enter total work hours of month=";
	cin>>hrs;
	cout<<"Enter amount received per hour=";
	cin>>amt;
	S=hrs*amt;
	cout<<"EID= "<<EID<<"\nSalary= "<<S;
}
