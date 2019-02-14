#include<bits/stdc++.h>
using namespace std;

long long int sm=1;
int fac(int n){

if(n<=1)return n;

fac(n-1);
sm*=n;
}

int main(){

int n;
cin>>n;

fac(n);
cout<<sm;

return 0;
}
