/*
https://www.youtube.com/watch?v=5InBCasJFi8
https://cp-algorithms.com/data_structures/disjoint_set_union.html
*/
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
void unionset(int x,int y){ //
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
void Do_unionset(int x,int y){ //
        int px=findparent(x);
        int py=findparent(y);
        //if (px != py) for better solution use it
            parent[py]=px;
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
    unionset(7,4);

    prt(n);
    return 0;

}
