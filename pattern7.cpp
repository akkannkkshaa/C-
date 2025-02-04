/*         1
          321
         54321
        7654321
*/
#include<iostream>
using namespace std;
class Abc
{
	public:
void display()
{
	int i, j,k, n = 4;
    for(i = 1; i <= n ;i++) 
	{
        for(k = n; k > i; k--) 
		{
            cout<<" ";
        }
        for(j = 2*i-1 ; j >= 1; j--) 
		{
            cout<<j;
        }
    
        cout<<endl;
        }
}
};
int main()
{
	Abc a1;
	a1.display();
}

