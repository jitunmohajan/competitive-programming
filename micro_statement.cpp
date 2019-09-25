
#include<bits/stdc++.h>
using namespace std;
#define in cin>> //in a;
#define out cout<< //out a;
//#define it iterator
#define pb push_back
#define pp pop_back()
#define vc vector<int>
#define vn vector<node>
#define vl vector<ll>
#define que queue<int>
#define ll long long int
#define ok cout<<"Testing ok>>"<<endl;
#define sf(x); scanf("%d",&x);
#define f(l,h) for(int ii=l;ii<=h;ii++)
#define fr(h,l) for(int jj=h;jj>=l;jj--)
#define countset(x) __builtin_popcountdouble(x)
#define fmap for(map<string,int>::iterator it=mp.begin();it!=mp.end();it++)
 //cout<<it->first<<"   "<<it->second<<endl;;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define chf for (c='a'; c<'h'; c++)

//___________________________dbug code___________________________
#define dbug(x) cout<<#x<<"       ="<<x<<endl
void vec_debug(vector<ll>a){ll len=a.size();for(ll i=0;i<len;i++)cout<<a[i]<<" ";cout<<endl;}
void array_debug(int a[],int len){for(ll i=0;i<len;i++)cout<<a[i]<<" ";cout<<endl;}
//_________________________________________________________________________


int gcd(int a,int b){return b==0?a:gcd(b,a%b);}
int lcm(int a,int b){return a*(b/gcd(a,b));}
string to_str(int n){stringstream ss;ss<<n;return ss.str();}
int to_reverse(int n){int num=0;while(n>0)num=num*10+(n%10),n/=10;return num;}
bool isprime(int i){int n=sqrt(i);for(int j=2;j<=n;j++)if(i%j==0)return false;return true;}
int to_int(string s){int num=0,len=s.length();for(int i=0;i<len;i++)num=num*10+(s[i]-48);return num;}


struct node{string a;int b;};
bool srt(const node &a,const node &b){return a.b<b.b;}
//a.resize(200,vector<int>(200,0));
int main(){
fast_io ok
cout<<to_reverse(1234)<<endl;

return 0;
}
//#define countset(x) __builtin_popcountdouble(x)

/*
sort(b,b+n,greater<ll>());
vector<node>v(3);
int n=3;
f(0,n-1)cin>>v[ii].a>>v[ii].b;
sort(v.begin(),v.end(),srt);
f(0,n-1) cout<<v[ii].a<<"   >>>"<<v[ii].b<<endl;
*/
