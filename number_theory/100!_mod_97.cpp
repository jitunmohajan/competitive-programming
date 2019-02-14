/*
equation>>
(a*b)%m=((a%m)*(b%m))%m;
input
a=100 //this is 100 factorial
b=97 // this is mod
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int fac=1;
	for(int i=1;i<=a;i++)
   		fac=((fac%b)*(i%b))%b;
	cout<<fac<<endl;
	
	return 0;
}

/*
(a!)%b>>

fac=1;
for(int i=1;i<=a;i++)
   fac=((fac%b)*(i%b))%b;
cout<<fac<<endl;

*/

