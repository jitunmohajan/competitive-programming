#include<bits/stdc++.h>
using namespace std;
vector<int>tree,arr;
void init(int node,int b,int e){
	if(b==e){
		tree[node]=arr[b];
		return;
	}
	int left=2*node;
	int right=2*node+1;
	int mid=(b+e)/2;
	init(left,b,mid);
	init(right,mid+1,e);
	tree[node]=tree[left]+tree[right];
}

int query(int node,int b,int e,int i,int j){
	if(i>e||j<b)
		return 0;
	if(b>=i&&j>=e)
		return tree[node];
	int left=2*node;
	int right=2*node+1;
	int mid=(b+e)/2;
	int q1=query(left,b,mid,i,j);
	int q2=query(right,mid+1,e,i,j);
	return q1+q2;
}

void update(int node,int b,int e,int i,int newvalue){
	if(i<b||i>e)
		return;
	if(e==b)
		{
		    tree[node]=newvalue;
		    return;
		}
	int left=2*node;
	int right=2*node+1;
	int mid=(b+e)/2;
	update(left,b,mid,i,newvalue);
	update(right,mid+1,e,i,newvalue);
	tree[node]=tree[left]+tree[right];
}
int main(){
	int n;
	cin>>n;
	tree.assign(n*4,0);
	arr.assign(n+2,0);
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	init(1,1,n);
	for(int i=1;i<n*2;i++)
        cout<<tree[i]<<" ";
    cout<<endl;
	cout << query(1, 1, n, 1, 3) << endl;
	update(1, 1, n, 2, 10);
    cout << query(1, 1, n, 1, 3) << endl;


	return 0;

}
