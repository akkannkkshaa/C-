/*
D
DC
DCB
DCBA
DCB
DC
D
*/

#include<iostream>
using namespace std;
int main(){
char i,j;
	for(i='D';i>='A';i--)
	{
		 for(j = 'D'; j >= i; j--) {
            cout<<j;
        }
        	cout<<endl;
	 }
	 for(i='B';i<='D';i++)
	 {
	 	for(j='D';j>=i;j--)
	 	{
	 		cout<<j;
		 }
		 cout<<endl;
	 }
	
	}
