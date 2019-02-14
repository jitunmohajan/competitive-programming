#include<bits/stdc++.h>
using namespace std;
//long long int gcd(long long int a,long long int b){return b==0? a:gcd(b,a%b);}
//long long int lcm(long long int a,long long int b){return a*(b/gcd(a,b));}

int gcd(int a,int b){return b==0? a:gcd(b,a%b);}
int lcm(int a,int b){return a*(b/gcd(a,b));}

int main(){

int a,b;
while(cin>>a>>b){

cout<<gcd(a,b)<<endl;
cout<<lcm(a,b)<<endl;
}
	return 0;

}
