#include<bits/stdc++.h>
using namespace std;

int prime_fac(int n,int i){

	if(n==1)return 1;
	else if(n%i==0){
          cout<<i<<endl;
          n/=i;
          prime_fac(n,i);
	}
	
	else prime_fac(n,++i);
}

int main(){

int n,i=2;
cin>>n;
prime_fac(n,i);

	return 0;

}
