#include<bits/stdc++.h>
using namespace std;

void factors(long long int fact[],long long int n)
{
    long long int i,j=0;
    for(i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            fact[j++]=i;
            if(i!=sqrt(n)) fact[j++]=n/i;
        }
    }
    sort(fact,fact+j);
    for(i=0; i<j; i++) printf("%lld ",fact[i]);
}
int main()
{
    long long int n,array[1000];
    scanf("%lld",&n);
    factors(array,n);
    return 0;
}

