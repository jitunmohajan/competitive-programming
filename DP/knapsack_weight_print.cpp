#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >k(0,vector<int>(0,0));
vector<int>wt,val;
int n,w;
int knapsack(){
	k.assign(n+1,vector<int>(w+1,0));
	for(int i=1;i<=n;i++)
		for(int j=1;j<=w;j++)
			if(wt[i-1]<=j)
				k[i][j]=max(val[i-1]+k[i-1][j-wt[i-1]],k[i-1][j]);
			else
				k[i][j]=k[i-1][j];
	int j=w,res=k[n][w];
	cout<<"max_value>>"<<k[n][w]<<endl;
	cout<<"weight>>"<<endl;
	for(int i=n;i>0&&res>0;i--)
		if(k[i-1][j]==res)
			continue;
		else{
			cout<<wt[i-1]<<" ";
			res-=val[i-1];
			j-=wt[i-1];
		}
}
int main(){
    freopen("input.txt","r+",stdin);
	cin>>n;
	val.assign(n+1,0);
	wt.assign(n+1,0);
	for(int i=0;i<n;i++)
		cin>>val[i];
	for(int i=0;i<n;i++)
		cin>>wt[i];
	cout<<"weight>";
	cin>>w;
	knapsack();

	return 0;
}
