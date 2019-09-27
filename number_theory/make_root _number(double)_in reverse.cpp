#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

ll t,n;
cin>>t;
while(t--){
  cin>>n;
  float s=sqrt(n);
  cout<<s<<endl;
  n=s*10000;
  int cnt=0;
  while(n>0){
     if(cnt==4)
       { cout<<".";
        cnt++;}
     else
     {
       cout<<n%10;
       n/=10;
       cnt++;
     }
  }
  cout<<endl;
}

return 0;
}



