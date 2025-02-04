/*
   1
  2 2
 3 3 3
4 4 4 4
*/
#include<iostream>
using namespace std;
class abc
{
	int i,j,k;
	public:
		void display()
		{
			for(i=1;i<=4;i++)
			{
				for(j=1;j<=i;j++)
				{
					cout<<" ";
				}
				for(k=1;k<=i;k++)
				{
					cout<<i<<" ";
				}
				cout<<endl;
			}
		}
};
int main()
{
	abc a1;
	a1.display();
}
