#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c,mn,akon,cc,ccc,ans;
    while(cin>>a>>b>>c){

        if(a<=c||b<=c)
            cc=min(a,b);
        else{
            ans=c;
            a-=c;
            b-=c;
            cc=a/3;
            ccc=b/3;
            //cout<<cc<<">>>>>>>>>>>>>>>>>"<<ccc<<endl;
            ans+=(2*min(cc,ccc));
            if(a%3==2&&b%3==2)
                ans++;
            }


           cout<<"total page print="<<ans<<endl;

    }




    return 0;
}
