#include<bits/stdc++.h>
using namespace std;
int main(){

string a;

vector<string>adj;
vector<string>b;
cin>>a;
int len=a.length();
for(int i=0;i<len;i++)
{
   //cout<<a<<endl;
   adj.push_back(a);
   a=a.substr(1,len);

}
sort(adj.begin(),adj.end());

for(int i=0;i<adj.size();i++)
    cout<<len-adj[i].length()<<endl;
	return 0;

}
