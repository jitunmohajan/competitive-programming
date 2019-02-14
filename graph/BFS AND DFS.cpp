#include<bits/stdc++.h>
using namespace std;
int main(){

int u,v,edge,vertex,b;
cin>>edge>>vertex;
vector<int>adj[vertex+1];
for(int i=0;i<edge;i++)
{
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
if(i==0)b=u;
}

//BFS>>
cout<<"BFS>>"<<endl;
queue<int>Q;
vector<int>visit(vertex+1,0);

Q.push(b);
visit[b]=1;
while(!Q.empty()){
    int u=Q.front();
    cout<<u<<" ";
    Q.pop();
    for(int i=0;i<adj[u].size();i++)
        if(visit[adj[u][i]]==0)
          {
              Q.push(adj[u][i]);
            visit[adj[u][i]]=1;
           }
}
cout<<endl;
//DFS>>
cout<<"DFS>>"<<endl;
stack<int>s;
vector<int>vis(vertex+1,0);
int c=0;

s.push(b);
while(!s.empty() && c!=vertex)
{
    int u=s.top();
    if(vis[u]==0)
    {
        vis[u]=1;
        cout<<u<<" ";
        c++;
    }
    for(int i=0;i<adj[u].size();i++)
        if(vis[adj[u][i]]==0)
          {s.push(adj[u][i]);
          break;
          }
        else if(i==adj[u].size()-1)
            s.pop();
}


return 0;
}
/*
9 8
1 2
1 3
1 4
2 5
3 6
4 7
5 8
6 8
7 8

output:>>
BFS>>
1 2 3 4 5 6 7 8
DFS>>
1 2 5 8 6 3 7 4
*/
