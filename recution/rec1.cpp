#include<bits/stdc++.h>
using namespace std;

int back(int n){
if(n==0)return 0;

cout<<n;
if(n!=1)cout<<" ";
back(n-1);


}



int main(){

int n;
cin>>n;

back(n);
return 0;
}
