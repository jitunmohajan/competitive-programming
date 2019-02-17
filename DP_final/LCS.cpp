#include<bits/stdc++.h>
using namespace std;
int n1,n2;
int srl;
vector<int>a,b;
vector<vector<int> >k(0,vector<int>(0,0));

int LCS(){
    k.assign(n1+1,vector<int>(n2+1,0));
    for(int i=1;i<=n1;i++)
        for(int j=1;j<=n2;j++)
            if(a[i-1]==b[j-1])
                k[i][j]=k[i-1][j-1]+1;
            else
                k[i][j]=max(k[i-1][j],k[i][j-1]);



    return k[n1][n2];
}

int main(){
   while(cin>>n1>>n2){
        if(n1==0&&n2==0)break;
        a.resize(n1);
        b.resize(n2);


        for(int i=0;i<n1;i++)
            cin>>a[i];
        for(int i=0;i<n2;i++)
            cin>>b[i];
        int res=LCS();
        cout<<res<<endl;
        cout<<"Twin Towers #"<<++srl<<endl;
        cout<<"Number of Tiles : "<<res<<endl<<endl;
    }
    return 0;
}

