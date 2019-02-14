#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
vector<int>visit(100);
int dfs(int u){
    cout<<u<<" ";
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(visit[v]==0)
        {
            visit[v]=visit[u]+1;
            dfs(v);
        }
    }
}
int main(){
    int edge,vertex,u,v;
    fill(visit.begin(), visit.end(), 0);
    cin>>edge>>vertex;
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    visit[1]=1;
    dfs(1);


    return 0;
}

