/*
input>>
6
1 6 2 4 5 0
output>>
1 2 4 5
size=4
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    vector<int>s(n+1),lis;
    for(int i=0;i<n;i++)
          cin>>s[i];
/*
longest increasing subsequence algorithm
*/
    lis.push_back(s[0]);
    for(int i=1;i<n;i++)
      {
          c=lis.size()-1;
          if(i>=2&&s[i]>lis[c-1]&&s[i]<=lis[c])
          {
            lis.pop_back();
            lis.push_back(s[i]);
          }
          else if(i>=2&&s[i]<=lis[c-1]&&s[i]<=lis[c])
            continue;
          else if(lis[c]<s[i])
            lis.push_back(s[i]);
      }
    //end
    for(int i=0;i<lis.size();i++)
        cout<<lis[i]<<" ";
        cout<<endl;
    cout<<"the size of longest subsequence is:"<<lis.size()<<endl;
    return 0;
}
