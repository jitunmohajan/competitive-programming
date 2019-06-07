/*
https://www.topcoder.com/community/competitive-programming/tutorials/binary-indexed-trees/
https://www.youtube.com/watch?v=aAALKHLeexw&feature=youtu.be&fbclid=IwAR3vphBYPl6PHfShesP3FmRZJmaYlHndKi5I4GPneELnkvbuVbgbhJgFqbc
https://www.geeksforgeeks.org/binary-indexed-tree-or-fenwick-tree-2/
*/

#include <bits/stdc++.h>
using namespace std;
#define mx 10000

vector<int>tree(mx,0),a(mx,0);
int read(int idx){
    int sum = 0;
    while (idx > 0){
        sum += tree[idx];
        idx -= (idx & -idx);
    }
    return sum;
}

void update(int idx, int val, int n){
    while (idx <= n){
        tree[idx] += val;
        idx += (idx & -idx);
    }
}
void print(vector<int>ar, int n) {
    for (int i = 1; i <= n; ++i) {
        cout << ar[i] << " ";
    }
    puts("");
}

int main() {


    int n;
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> a[i];
        update(i,a[i],n);
    }
    print(tree,n);
    cout<<read(5); // this will the sum of range(0 to 5)
    int m;
    cin>>m;
    cout<<read(m)-read(2)<<endl;


    return 0;
}

