#include<bits/stdc++.h>
using namespace std;
vector<int>tree,arr,lazy;
void propogation(int node,int b,int e){
    if(lazy[node]==0)return;
    tree[node]+=(e-b+1)*lazy[node];
    if(b!=e){
        lazy[2*node]=lazy[node];
        lazy[2*node+1]=lazy[node];
    }
    lazy[node]=0;
}
void build(int node,int b,int e){
    if(b==e){
        tree[node]=arr[b];
        return;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node]=tree[left]+tree[right];
}
int query(int node,int b,int e,int i,int j){
    propogation(node,b,e);
    if(i>e||j<b)return 0;
    if(i<=b&&j>=e)
        return tree[node];
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    int q1=query(left,b,mid,i,j);
    int q2=query(right,mid+1,e,i,j);
    return q1+q2;
}
void update(int node,int b,int e,int i,int j,int newvalue){
    propogation(node,b,e);
    if(i>e||j<b)return;
    if(i<=b&&j>=e){
        lazy[node]=newvalue;
        propogation(node,b,e);
        return;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,j,newvalue);
    update(right,mid+1,e,i,j,newvalue);
    tree[node]=tree[left]+tree[right];
}
int main(){
    #ifdef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    tree.assign(n*4,0);
    lazy.assign(n*4,0);
    arr.assign(n+1,0);
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    build(1,1,n);
    cout<<"brfore="<<query(1,1,n,1,3)<<endl;
    update(1,1,n,1,3,2);
    cout<<"After="<<query(1,1,n,1,3)<<endl;
    update(1,1,n,4,5,10);
    cout<<"After="<<query(1,1,n,3,4)<<endl;
    update(1,1,n,4,5,10);
    cout<<"After="<<query(1,1,n,3,4)<<endl;
    
    
    return 0;
}
