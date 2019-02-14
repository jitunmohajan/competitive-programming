#include<bits/stdc++.h>

using namespace std;


int main(){
    
    int n,i;
cin>>n;
vector<int> a;
for(i=1;i<=n;i++) {
    a.push_back(i);
    cout<<i;
    if (i!=n) cout<<" ";
}
cout<<endl;
while(next_permutation(a.begin(),a.end())){
    cout<<a[0];
    for(i=1;i<n;i++) cout<<" "<<a[i];
    cout<<endl;
}
}