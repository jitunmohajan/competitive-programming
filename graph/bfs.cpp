#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector <int>adj[100];
int visited[100];
int i,E,V;
int u,v;
void addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void bfs(int s )
{
for(i=0;i<V;i++)
    visited[i]=0;
queue<int>Q;
Q.push(s);
visited[s]=1;
while(!Q.empty())
{ int u=Q.front();
cout<<u<<"  " ;
Q.pop();
for(int i=0;i<adj[u].size();i++)
    if(visited[adj[u][i]]==0)
{int v=adj[u][i];
visited[v]=1;
Q.push(v);
}

}

}

int main()
{
    // Create a graph given in the above diagram
 cin>>E>>V;
 for(i=0;i<E;i++)
{ cin>>u>>v;
  addEdge(u,v);
}


    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) n";
    bfs(1);

    return 0;
}
