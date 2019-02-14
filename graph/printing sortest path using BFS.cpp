#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >adj(0,vector<int>(0,0));
vector<int>visit,dis;
int u,v,s,e,node,edge;
void bfs(int s,int e){
  queue<int>q;
  q.push(s);
  visit[s]=1;
  dis[s]=s;
  while(!q.empty()){
    u=q.front();
    q.pop();
    for(int i=0;i<adj[u].size();i++)
      {
          v=adj[u][i];
          if(!visit[v])
          {
            visit[v]=visit[u]+1;
            dis[v]=u;
            q.push(v);
          }
      }
  }
  if(!visit[e])//e is the end node
        return;
  vector<int>path;
  int now=e;
  path.push_back(e);
  while(now!=s){
    now=dis[now];
    path.push_back(now);
  }

  for(int i=path.size()-1;i>=0;i--)
    cout<<path[i]<<" ";
}
int main(){
  cin>>node>>edge;
  visit.assign(node+1,0);
  dis.assign(node+1,0);
  adj.assign(node+1,vector<int>(0,0));
  for(int i=0;i<edge;i++)
  {
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  cin>>s>>e;
  bfs(s,e);
  return 0;

}

