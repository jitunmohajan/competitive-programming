#include<bits/stdc++.h>
using namespace std;
int sum;
int prime_factorize(int n){
    int sq=sqrt(n);
    while(n%2==0){
      cout<<2<<endl;// 2 is prime factor
      n/=2;
     }

    for(int i=3;i<sq;i+=2)
        while(n%i==0){
          cout<<i<<endl;//i is prime factor
          n/=i;
        }
    if(n>2)
      cout<<n<<endl;//last number prime factor


}


int main(){

int n,i=2;
cin>>n;

prime_factorize(n);
cout<<endl<<"sum>>"<<sum<<endl;
	return 0;

}
