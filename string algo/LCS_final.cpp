#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >l(0,vector<int>(0,0));
string lcs,a,b;
string ans;
int len_a,len_b;
int LCS(){
	for (int i=0; i<=a.length(); i++)
   		for (int j=0; j<=b.length(); j++)
       		if (i==0||j==0)
         		l[i][j]=0;
       		else if (a[i-1]==b[j-1])//i-1 or j-1 means index number if i or j=3 that mean it will on the a or b string in previous index
         		l[i][j]=l[i-1][j-1] + 1;
       		else
         		l[i][j]=max(l[i-1][j],l[i][j-1]);
}
int LCS_print(int i,int j){
	if(i==0||j==0)
        return 0;
    else if(a[i-1]==b[j-1])
        lcs+=a[i-1],i--,j--;
    else if(l[i-1][j]>l[i][j-1])
        i--;
    else j--;
    LCS_print(i,j);
}
int main(){
	cin>>a>>b;
	len_a=a.length();
	len_b=b.length();
	l.assign(len_a+1,vector<int>(len_b+1,0));
	lcs="";
	LCS();
	cout<<"longest common subsequence is:"<<l[len_a][len_b]<<endl;
	LCS_print(len_a,len_b);
	reverse(lcs.begin(),lcs.end());
	cout<<lcs<<endl;
	return 0;
}
