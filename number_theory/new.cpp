#include<bits/stdc++.h>
using namespace std;
int main(){
//char a[100];
//gets(a);
string a;
int b;
cout<<"input number>>"<<endl;
cin>>a;
cout<<"mod number>>>>"<<endl;
cin>>b;
int s=0,carry=0;
for(int i=0;i<a.length();i++)
{
    s=(a[i]-48)*10+carry;
    carry=s%b;
    s=carry;


}
cout<<carry;


return 0;
}

