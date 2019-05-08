#include<bits/stdc++.h>
using namespace std;
#define MX 100
int parent[MX];
int rankparent[MX];

void initialize(int n){
    for(int i=0;i<n;i++)
    {
        parent[i]=i;
        rankparent[i]=0;
    }
}
int findparent(int x){
    if(x!=parent[x])
        return parent[x]=findparent(parent[x]);
    else
        return x;
}
void unionset(int x,int y){
    int px=findparent(x);
    int py=findparent(y);
    if(px==py)return;
    //cout<<px<<" >>"<<py<<endl;
    if(rankparent[px]<rankparent[py])
        parent[px]=py;
    else if(rankparent[px]>rankparent[py])
        parent[py]=px;
    else{
        parent[py]=px;
        rankparent[px]++;
    }
}
void prt(int n){
    for(int i=0;i<n;i++)
        cout<<"Node ="<<i<<"  and parent="<<parent[i]<<"  and rankparent="<<rankparent[i]<<endl;
}
int main(){

    int n;
    cin>>n;
    initialize(n);
    unionset(0,1);
    unionset(4,2);
    unionset(3,1);
    unionset(0,3);
    unionset(0,4);
    prt(n);
    return 0;

}
