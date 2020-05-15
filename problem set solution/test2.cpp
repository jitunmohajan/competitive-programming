#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    while(cin>>a>>b>>c){
        if(a>b)swap(a,b);
        b-=a;
        if(b>c)b=c;
        cout<<a+(b+c)/2<<endl;
    }

}
int dfs(int u){
    for(int i=0;i<adj[u].size();i++)
        if(!visit[adj[u][i]])
            visit[adj[u][i]]=1,dfs(visit[adj[u][i]]);
}
int bfs(int u){
    set<int>q;
    q.push(u);
    while(!q.empty()){
        int u=q.top();
        for(int i=0;i<adj[u].size();i++)    
            if(!visit[adj[u][i]])
            {
                cout<<adj[u][i]<<endl;
                visit[adj[u][i]]=1;
            }
            /*
            new main function that can be change in different way
            bfs means breath fasr search 
            it's a seaching algorithm 
            so find
            the main way 
            to take a step 
            string s;
            cin>>s;
            cou<<s<<endl;
            for(int i=0;i<s.size();i++)
                cout<<s[i]<<endl;
                cout<<"test"<<endl;
            
            */
    }
}
int main(){
    solve();
    return 0;
}