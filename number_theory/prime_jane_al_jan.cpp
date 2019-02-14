
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

for(int i=2;i<=n;i++)//must use i<=n because you have to find 1 to n
  if(isprime(i))
    cout<<i<<" ";

return 0;
}
