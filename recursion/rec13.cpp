#include<bits/stdc++.h>
using namespace std;

int cnt;
int back(int n,string a){

if(n==0)return 0;
back(n-1,a);

if(a[n-1]=='a'||a[n-1]=='e'||a[n-1]=='i'||a[n-1]=='o'||a[n-1]=='u'||a[n-1]=='A'||a[n-1]=='E'||a[n-1]=='I'||a[n-1]=='O'||a[n-1]=='U')
    cnt++;


}
int main(){

string a;
getline(cin,a);
int n=a.length();
back(n,a);
cout<<cnt;

return 0;
}
