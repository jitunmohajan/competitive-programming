#include<bits/stdc++.h>
using namespace std;
#define tvalue 0.000000001
double x;
double predicate(double beg,double ed){
    if(ed-beg<tvalue)
    {
            cout<<ed<<endl;return 0;
    }
    double m=(beg+ed)/2;
    if(m*m>=x) ed=m;
    else       beg=m;
    predicate(beg,ed);
}
int main(){
    cin>>x;
    predicate(0,x);

    return  0;
}

