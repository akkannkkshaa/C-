/*
3
32
321
3210
321
32
3
*/
#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=3;i>=0;i--)
	{
		 for(j = 3; j >= i; j--) {
            cout<<j;
        }
        	cout<<endl;
	 }
	 for(i=1;i<=3;i++)
	 {
	 	for(j=3;j>=i;j--)
	 	{
	 		cout<<j;
		 }
		 cout<<endl;
	 }
	
	}
