#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,r1,r2,mn;
    while(scanf("%d",&n)!=EOF){
        mn=9999999;
        vector<int>a(n);

    for(int i=0;i<n;i++)
      cin>>a[i];
    cin>>m;



    for(int i=0;i<n-1;i++)
      for(int j=i+1;j<n;j++)
        if(m==a[i]+a[j]&&mn>abs(a[i]-a[j]))
        {
            r1=min(a[i],a[j]);
            r2=max(a[i],a[j]);
            mn=abs(a[i]-a[j]);
        }

    printf("Peter should buy books whose prices are %d and %d.\n\n",r1,r2);


    }

	return 0;

}
