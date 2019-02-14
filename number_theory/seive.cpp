#include<bits/stdc++.h>
using namespace std;
int  main(){

int n;
cin>>n;

vector<int>visit(n+1,0);

for(int i=2;i<=n;i++)
	if(visit[i]==0)
		for(int j=i*2;j<=n;j+=i)
			visit[j]=1;
//int cnt=0;
for(int i=2;i<=n;i++)
    if(visit[i]==0)
      	cout<<i<<" ";


	return 0;

}
