#include<bits/stdc++.h>
using namespace std;
vector<int>visit;
queue<int>s;
int u,v,edge,node;
int bfs(int u,vector<int>adj[]){
     s.push(u);
     visit[u]=1;//cnt++
     while(!s.empty()){
          u=s.front();
          s.pop();
          cout<<u<<" ";
          for(int i=0;i<adj[u].size();i++)
               if(!visit[adj[u][i]])
               {    visit[adj[u][i]]=1;
                    s.push(adj[u][i]);
                    //cnt++;
               }
     }
    //return cnt;//return total of visiting node
}
int main(){
    // freopen("input.txt","r",stdin);
     cin>>node>>edge;
     visit.assign(node+1,0);
     vector<int>adj[node+1];
     for(int i=0;i<edge;i++){
          cin>>u>>v;
          adj[u].push_back(v);
          adj[v].push_back(u);
     }
     bfs(1,adj);

     return 0;
}
