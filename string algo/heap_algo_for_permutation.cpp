#include <bits/stdc++.h>
using namespace std;
int cnt;
void permute(string a, int l, int r)
//l is beginning and r is r is ending
{
   if (l == r)
    cout<<a<<endl;
   else
   {
       for(int i = l; i <= r; i++)
       {
          swap(a[l],a[i]);
          permute(a, l+1, r);
          swap(a[l],a[i]);
       }
   }
}

int main()
{

    string a;
    cin>>a;
    int n=a.length();
    permute(a, 0, n-1);
    return 0;
}
