
#include<bits/stdc++.h>
using namespace std;
int main(){

string a;
int t;

cin>>t;

for(int m=0;m<t;m++){
    cin>>a;
    string b(a);
    reverse(b.begin(),b.end());

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

cout<<lcs.length();
if(m!=t-1)
    cout<<endl;
}


	return 0;
}

/*
	string a,b;

cin>>a>>b;
int L[a.length()+1][b.length()+1];

for (int i=0; i<=a.length(); i++)
   {
     for (int j=0; j<=b.length(); j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
       else if (a[i-1] == b[j-1])//i-1 or j-1 means index number if i or j=3 that mean it will on the a or b string in previous index
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
          lcs+=a[i-1];//or b[j-1];
          i--; j--;
          }

      else if (L[i-1][j] > L[i][j-1])
         i--;
      else
         j--;

}
//cout<<lcs;
reverse(lcs.begin(),lcs.end());
cout<<lcs<<endl;

*/
