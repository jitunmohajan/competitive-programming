#include<bits/stdc++.h>
using namespace std;
vector<int>a,lis,l;
int max_lis,n,pos;
int lis_func(int n){
  for(int i=1;i<n;i++)
    for(int j=0;j<i;j++)
      if(a[i]>a[j]&&lis[i]<lis[j]+1)
        {
            lis[i]=lis[j]+1;
            if(lis[i]>max_lis)max_lis=lis[i];
        }
}
int prt(int n,int max_lis){//n=position & max_lis=max lis
    if(n<0)return 0;
    if(lis[n]==max_lis)
    {
        l[pos]=a[n];//pos= max_lis-1 is will decrease
        max_lis--;
        pos--;
    }
    prt(--n,max_lis);
}

int main(){
    //freopen("input.txt","r+",stdin);
    cin>>n;
    a.assign(n+1,0);
    lis.assign(n+1,1);
    max_lis=0;
    for(int i=0;i<n;i++)
      cin>>a[i];
    lis_func(n);
    cout<<"max lis>>"<<max_lis<<endl;
    l.assign(max_lis+1,0);
    pos=max_lis-1;
    prt(n-1,max_lis);
    for(int i=0;i<max_lis;i++)
    	cout<<l[i]<<" ";


}
