#include<bits/stdc++.h>
using namespace std;
vector<int>a;
int binary_search(int low,int high,int key){
    int mid;
    while(low<high){
        mid=(low+high)/2;
        if(a[mid]<key)
            low=mid+1;
        else if(a[mid]>key)
            high=mid-1;
        else return 1;
    }
    return 0;
}
int main()
{
    int n,key;
    cin>>n;
    a.assign(n,0);
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>key;
    if(binary_search(0,n,key))
        cout<<"yes"<<endl;
    else cout<<"no"<<endl;

    cout << endl;
}
