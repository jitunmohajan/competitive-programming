#include<bits/stdc++.h>
using namespace std;

int kmp(int i,string a,string b){
int f=1,c=i;
for(int i=0;i<b.length();i++)
    if(a[c]!=b[i])
      {
          f=0;
          break;
      }
    else
        c++;

return f;
}

int main(){

string a,b;
cin>>a>>b;
int cnt=0;
for(int i=0;i<a.length();i++)
    if(a[i]==b[0]&&a.length()-i>=b.length())
      if(kmp(i,a,b))
        cnt++;

      /*
      if(cnt==0)
        cout<<"Y";
      else
        cout<<"N";*/



return 0;
}

