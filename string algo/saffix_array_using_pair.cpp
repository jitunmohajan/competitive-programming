#include<bits/stdc++.h>
using namespace std;
typedef pair<string,int>pii;
bool sortbysec(const pair<string,int> &a,const pair<string,int> &b)
{
    return (a.first < b.first);
}

int main(){

vector<pii>adj;
string a;
cin>>a;

int len=a.length();//there is a problem if you will use a.length in loop because it is changing

for(int i=0;i<len;i++)
{//there is a problem if you will use a.length in loop because it is changing
    /*
    //for better solution
    string b=a.substr(i,a.length()); try this same fact
    */
    adj.push_back(make_pair(a,i));
    a=a.substr(1,len);
}
cout<<"without sort>>>"<<endl;
for(int i=0;i<adj.size();i++)
    cout<<adj[i].first<<"      "<<"index >>>"<<adj[i].second<<endl;

cout<<endl<<endl;
cout<<"after the sort>>>>"<<endl;
 sort(adj.begin(), adj.end(), sortbysec);
for(int i=0;i<adj.size();i++)
    cout<<adj[i].first<<"      "<<"index >>>"<<adj[i].second<<endl;
return 0;
}

