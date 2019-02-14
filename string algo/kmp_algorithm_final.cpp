#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int cnt;
int kmp(string a,string b){
   int l1=a.length(),l2=b.length();
   int pos=0;
  for(int i=0;i<l1;i++){
      if(a[i]==b[pos])
          {
           pos++;
           if(pos==l2)
            {pos=0;cnt++;}
           }
       else if(a[i]!=b[pos])
         {break;cnt=0;}
   }
   return cnt;
}
int main(){

string a,b;
cin>>a>>b;
//kmp(a,b);
cout<<kmp(a,b);

  return 0;

}

