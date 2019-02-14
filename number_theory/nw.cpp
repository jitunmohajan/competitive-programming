#include<bits/stdc++.h>
using namespace std;

bool isprime(int i){
    int n=sqrt(i);
    for(int j=2;j<=n;j++)
        if(i%j==0)
           return false;
    return true;
}



int main(){

int n;
cin>>n;
int cnt=0;
for(int i=2;i<=100000;i++)//must use i<=n because you have to find 1 to n
  {
      if(isprime(i))
        {cout<<i<<" ";cnt++;}
    if(cnt==n)
       {
            break;
       }

  }


return 0;
}
