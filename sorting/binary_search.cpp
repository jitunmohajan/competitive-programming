#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];

int beg=0,end=n,s;
cout<<"namber finder>>";
cin>>s;
while(beg<end){
    int mid=(beg+end)/2;
    if(a[mid]==s)
    {
        cout<<"yes";
        break;
    }
    else if(a[mid]<s)
        beg=mid+1;
    else
        end=mid-1;

}



return 0;
}
