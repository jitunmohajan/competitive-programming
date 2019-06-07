#include<bits/stdc++.h>
using namespace std;

int back(int n,int a[]){
int f=0;
    if(n==0)return 0;

    if(n%2!=0)
        {
            f=1;
            cout<<a[n-1];
        }
        if(n!=1&&f==1){
            cout<<" ";
            f=0;
        }
    back(n-1,a);

    }


int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
back(n,a);

return 0;
}
