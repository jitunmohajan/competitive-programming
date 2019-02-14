//cout << "a\n"; //here '\n' mean same next line as printf()
//cout<<(a>5?"YES":"NO")<<endl;
//int a=(n+1)/2;//it works like a=ceil(n/2);
//int dir[][]={{-1}};
//int i=pow(2,3);
//int j=sqrt(4);
//int j=abs(-4)//j=4
//int j=abs(4)//j=4
//if you want find distance between -2 to 4
//c=abc(a-b); than use abs(a-b)  c=6 where a=-2 and b=6;
#include<bits/stdc++.h>
using namespace std;

int reverse(n){ //this make a number in reverse order
//suppose n=123,if you write b=reverse(n); than b=321
 int sum=0;
 while(n>0){
    sum=sum*10+n%10;
    n/=10;
  }
return sum;
}



int main(){

string s;
int n=12344;
stringstream ss;
ss<<n;
s=ss.str();
cout<<s;


	return 0;
}
/*
int a=1234567890;
long int b=1234567890;
long long int c=1234567890123456789;
//unsigned long long int c=12345678901234567890;
long long d=1234567890123456789;
float e=123456;
double f=123456;
*/
/*
//int to string convert

int i = 1212;
    stringstream ss;
    ss << i;
    string s=ss.str();

cout<<s;

*/
