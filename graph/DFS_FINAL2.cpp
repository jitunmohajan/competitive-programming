#include<bits/stdc++.h>
using namespace std;
int u,v,l,node,edge,cnt;
vector<vector<int> >adj(0,vector<int>(0));
vector<int>visit;
int dfs(int u){
	cout<<u<<" ";
	for(int i=0;i<adj[u].size();i++)
		if(!visit[adj[u][i]])
		{
			visit[adj[u][i]]=1;
			dfs(adj[u][i]);
			//cnt++;
		}
	//return cnt; in case of returning visiting total node
}
int main(){
    cin>>node>>edge;
	adj.assign(node+1,vector<int>(0,0));
	visit.assign(node+1,0);
	for(int i=0;i<edge;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	visit[1]=1;
	//cnt=0;
	//cnt++;
	dfs(1);
    return 0;
}
