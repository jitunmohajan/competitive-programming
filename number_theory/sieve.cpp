#include<bits/stdc++.h>
using namespace std;
#define mx 10000
vector<int>visit(mx,0);
void sieve(){
    for(int i=2;i<=mx;i++)
        if(visit[i]==0)
            for(int j=i*2;j<=mx;j+=i)
                visit[j]=1;
}
int  main(){
    sieve();
    int n;
    cin>>n;
    int cnt=0;
    for(int i=2;i<=n;i++)
        if(visit[i]==0)
            cnt++,cout<<i<<" ";
    cout<<endl<<"total prime="<<cnt<<endl;

	return 0;

}
