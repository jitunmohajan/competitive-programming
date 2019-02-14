#include<bits/stdc++.h>
using namespace std;
int main(){

    string a;
string b="abcdefghijklmnopqrstuvwxyz";

    cin>>a;
    int s,crr;
   int f=1;
    for(int i=0;i<a.length();i++)
      {
          crr=a[i]-97;

            if(i==0)
              s=a[i]+1-97;
            else if(s!=crr)
              {
                  if(s-crr==1||crr-s==1)
              {
                a[i]=b[s];
                s++;
              }
              }
            else
                s++;


   if(s==26)
      s=0;


      }
string c="";
       for(int i=0;i<a.length();i++)
         {
             crr=
         }

      if(f==1)
        cout<<a;
      else
        cout<<-1;

	return 0;

}

