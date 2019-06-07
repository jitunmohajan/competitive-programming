#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){

if(a==0)
    return b;
gcd(b%a,a);


}

int main(){

    int a,b;
cin>>a>>b;
int s=gcd(a,b);
if(s<0)
    s*=(-1);
    cout<<s;



return 0;
}

