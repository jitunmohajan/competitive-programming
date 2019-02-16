#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll W,n;
vector<ll>val,wt;
vector<vector<ll> >k(0,vector<ll>(0,0));
ll knapsack(){
    k.assign(n+1,vector<ll>(W+1,0));
    for(ll i=1;i<=n;i++)
        for(ll w=1;w<=W;w++)
            if(wt[i-1]<=w)
                k[i][w]=max(val[i-1]+k[i-1][w-wt[i-1]],k[i-1][w]);
            else
                k[i][w]=k[i-1][w];


    ll w=W,res=k[n][W];
    cout<<"max value="<<k[n][w]<<endl;
    cout<<"weight"<<endl;
    for(ll i=n;i>0&&res>0;i--){
        if(k[i-1][w]==res)
            continue;
        else{
            printf("%d\n",wt[i-1]);
            res-=val[i-1];
            w-=wt[i-1];
        }
    }
    return k[n][W];
}
int main(){
    while(cin>>n>>W){
        val.assign(n,0);
        wt.assign(n,0);
        for(ll i=0;i<n;i++)
            cin>>wt[i]>>val[i];
        ll res=knapsack();
        cout<<"k[n][W]="<<res<<endl;
    }
    return 0;
}

