#include<bits/stdc++.h>
using namespace std;
#define ll int
#define dbug(x) cout<<#x<<"    ="<<x<<endl;
struct node{
    int a,b;
};
bool srt(node &a,node &b){
    return a.a<a.b;
}

int main(){
    int n;
    cin>>n;
    vector<node>a(n);

    for(int i=0;i<n;i++)
        cin>>a[i].a>>a[i].b;
    sort(a.begin(),a.end(),srt);
    for(int i=0;i<n;i++)
        cout<<a[i].a<<"     ->   "<<a[i].b<<endl;
    return 0;
}

