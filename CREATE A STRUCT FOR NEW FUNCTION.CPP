#include<bits/stdc++.h>
using namespace std;
vector<int>parent,rankparent;
struct node{
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

        if(rankparent[px]<rankparent[py])
            parent[px]=py;
        else if(rankparent[px]>rankparent[py])
            parent[py]=px;
        else{
            parent[py]=px;
            rankparent[px]++;
        }
    }

}dis;
int main(){

    int n,a,b;
    cin>>n;
    getchar();
    while(n--){
        string s,ss;
        char ch;
        cin>>ch;
        getchar();
        int cnt=0,nn=ch-'A';
        parent.assign(nn+1,0);
        rankparent.assign(nn+1,0);
        dis.initialize(nn+1);
        while(1){
            getline(cin,s);
            if(s=="")break;
            dis.unionset(s[0]-'A',s[1]-'A');
        }

        vector<int>visit(nn+2,0);
        for(int i=0;i<nn+1;i++)
          {
            int px=dis.findparent(i);
            if(!visit[px])
            {
                cnt++;
                visit[px]=1;
            }
          }
        cout<<cnt<<endl;
        if(n>=1)cout<<endl;
    }
    return 0;
}