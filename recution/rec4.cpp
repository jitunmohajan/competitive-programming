#include<bits/stdc++.h>
using namespace std;
int cnt=-999999999;
int mx(int n,int a[]){

  if(n==0)return 0;

  mx(n-1,a);

if(a[n-1]>cnt)
    cnt=a[n-1];
}


int main(){

int n;

cin>>n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
mx(n,a);
cout<<cnt;

return  0;
}
