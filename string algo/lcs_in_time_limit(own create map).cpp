#include<bits/stdc++.h>
using namespace std;
int main(){

map<char,int>mp;
string a,b;
cin>>a>>b;
for(int i=0;i<a.length();i++)
       mp[a[i]]++;
for(int i=0;i<b.length();i++)
        if(mp[b[i]]>0)
          {
              cout<<b[i];
              mp[b[i]]--;
          }

return 0;
}

