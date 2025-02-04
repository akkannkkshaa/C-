#include<iostream>
using namespace std;
class student
{
	public:
		int sID;
		string studentname;
};
class test:public student
{
	public:
		int marks;
		string subjectname;
};
class sports
{
	public:
		string sportname;
		int smarks;
};
class result:public test,public sports
{
	public:
		int r;
		void set()
		{
			sID=1011;
			studentname="Ak";
			subjectname="All subjects combined";
			marks=75;
			sportname="Badminton";
			smarks=10;
		}
		void mark()
		{
			r=marks+smarks;
		}
		void display()
		{
			cout<<sID<<endl<<studentname<<endl<<subjectname<<endl<<marks<<endl<<sportname<<endl<<smarks<<endl<<r;
		}
};
int main()
{
	result r1;
	r1.set();
	r1.mark();
	r1.display();
}
