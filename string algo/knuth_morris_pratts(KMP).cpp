/*
to know about this more check out>>
https://www.youtube.com/watch?v=cH-5KcgUcOE&feature=youtu.be

*/
#include<bits/stdc++.h>
using namespace std;
int main(){

string a,b;
cin>>a>>b;

for(int i=0;i<a.length();i++)
{
 if(a[i]==b[0] && a.length()-i>=b.length())
    {
      string c;
      c=a.substr(i,b.length());
      if(b==c)
        {
         cout<<"index number>>"<<i<<endl;
         cout<<"match"<<endl;
         break;
         }
    }
    else if(i==a.length()-1)
       cout<<"NOT found";
}


      return 0;

}

