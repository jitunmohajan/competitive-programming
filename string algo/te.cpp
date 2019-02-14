#include<bits/stdc++.h>
using namespace std;

long long int prime_factorization(long long int n,long long int i){

	if(n==1)
		return 1;
    else if(n%i!=0 && i==2)
        {
    		i++;//3+2=5+2=7
    		prime_factorization(n,i);
    	}
	else if(n%i==0)
	{
		n/=i;
	    cout<<i<<" ";
 		prime_factorization(n,i);
    }
    else
    	{
    		i+=2;//3+2=5+2=7
    		prime_factorization(n,i);
    	}
}

int main(){

long long int n,i;

while(1){
	i=2;
	cin>>n;
	prime_factorization(n,i);
	cout<<endl;
}
}
