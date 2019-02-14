#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;

cin>>a>>b;
int L[a.length()+1][b.length()+1];

for (int i=0; i<=a.length(); i++)
   {
     for (int j=0; j<=b.length(); j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
       else if (a[i-1] == b[j-1])
         L[i][j] = L[i-1][j-1] + 1;
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }

string lcs="";
int i=a.length(),j=b.length();
while(i>0 && j>0)
{
	  if (a[i-1] == b[j-1])
      {
          lcs+=a[i-1];
          i--; j--;
          }

      else if (L[i-1][j] > L[i][j-1])
         i--;
      else
         j--;

}
reverse(lcs.begin(),lcs.end());
cout<<lcs<<endl;
	return 0;
}

