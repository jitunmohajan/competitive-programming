/*
(2^100)%5
n=2
p=100
m=5
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll m;

ll f(ll n,ll p)
{
	if(p==0) return 1;
	if(p%2==0)
	{
		ll ret=f(n,p/2);
		return ((ret%m)*(ret%m))%m;
	}
	else return ((n%m)*(f(n,p-1)%m))%m;
}
int main(){

ll n,p;
cin>>n>>p>>m;
cout<<f(n,p);

	return 0;
}

