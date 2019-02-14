#include<bits/stdc++.h>
using namespace std;
typedef pair<string,int>pii;
bool srt(const pair<string,int>&a,const pair<string,int>&b){
   return a.first<b.first;
}
int search_pattern(string ptrn,vector<pii>adj){
     int beg=0,end=adj.size();
     while(beg<end){
            int mid=(beg+end)/2;
            if(adj[mid].first.find(ptrn)!=-1)
             {
                 cout<<"yes";
                break;
             }
             else if(adj[mid].first.find(ptrn)<0)
                end=mid-1;
             else
                beg=mid+1;
     }
}

int main(){
    string a;
    cin>>a;
    vector<pii>adj;

    int len=a.length();
    for(int i=0;i<len;i++)
    {
    	string b=a.substr(i,a.length());
        adj.push_back(make_pair(b,i));

    }

    sort(adj.begin(),adj.end(),srt);

    for(int i=0;i<adj.size();i++)
    cout<<adj[i].first<<"      index>>>>>>>>>>>>>>>>>>>>>>>"<<adj[i].second<<endl;

    string ptrn;

    cin>>ptrn;

    search_pattern(ptrn,adj);

	return 0;

}

