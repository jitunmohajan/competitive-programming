#include<bits/stdc++.h>
using namespace std;

int back(string a,int m){

if(m==0)return 0;
back(a,m-1);
cout<<a[m-1]<<" ";

}

int main(){

    int n;
    cin>>n;

    while(n--){
    string a;
    cin>>a;
    int m=a.length();
    back(a,m);
    if(n!=0)
    cout<<endl;

    }
return 0;
}
