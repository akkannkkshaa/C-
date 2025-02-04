/*3. 55555
     4444
     333
      22
      1
*/
#include<iostream>
using namespace std;
class abc
{
	int i,j,k;
	public:
		void display()
		{
		for(i=5;i>=1;i--)
		{
			for(j=i;j<5;j++)
			{
				cout<<" ";
			}
			for(k=1;k<=i;k++)
			{
				cout<<i<<"  ";
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
