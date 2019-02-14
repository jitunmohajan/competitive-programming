#include<bits/stdc++.h>
using namespace std;
long long int sm;

int back(int n,int a[]){

    if(n==0)return 0;

     back(n-1,a);
     sm+=a[n-1];
}

int main(){
sm=0;
int n;
cin>>n;

int a[n+1];
for(int i=0;i<n;i++)
    cin>>a[i];
    back(n,a);
cout<<sm<<endl;

return 0;
}
