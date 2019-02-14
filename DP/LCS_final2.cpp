#include<bits/stdc++.h>
using namespace std;
vector<int>a,lis;
int max_lis,n;
int lis_func(int n){
  for(int i=1;i<n;i++)
    for(int j=0;j<i;j++)
      if(a[i]>a[j]&&lis[i]<lis[j]+1)
        {
            lis[i]=lis[j]+1;
            if(lis[i]>max_lis)max_lis=lis[i];
        }

}
int prt(int n){
    for(int i=0;i<n;i++)
        if(i==0)
            cout<<a[i]<<" ";
        else if(lis[i]<=lis[i-1])
            lis[i]=lis[i-1];
        else
            cout<<a[i]<<" ";
}

int main(){
    while(cin>>n){
    a.assign(n+1,0);
    lis.assign(n+1,1);
    max_lis=0;
    for(int i=0;i<n;i++)
      cin>>a[i];
    lis_func(n);
    cout<<"max lis>>"<<max_lis<<endl;//initialize max_lis as a global variable
    //otherwise you have to return it from the function;
    prt(n);
    cout<<endl;
    }

}
