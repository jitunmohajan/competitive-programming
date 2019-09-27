#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >k(0,vector<int>(0,0));
vector<int>val,wt;
int w,n;
int knapsack(){
  k.assign(n+1,vector<int>(w+1,0));
  for (int i=0;i<=n;i++)
      for (int j=0;j<=w;j++)
          if (i==0||j==0)
              k[i][j] = 0;
          else if(wt[i-1]<=j)
              k[i][j]=max(val[i-1]+k[i-1][j-wt[i-1]],k[i-1][j]);
          else
              k[i][j]=k[i-1][j];
  return k[n][w];
}
int main(){
  while(1){
    cout<<"number of weight and value>>";
    cin>>n;
    val.assign(n+1,0);
    wt.assign(n+1,0);
    for(int i=0;i<n;i++)
      cin>>val[i];
    for(int i=0;i<n;i++)
      cin>>wt[i];
    cout<<"weight>>";
    cin>>w;
    cout<<"knapsack solution is>>"<<knapsack()<<endl;
  }
  return 0;
}
