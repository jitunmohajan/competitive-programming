//https://www.geeksforgeeks.org/count-divisors-n-on13/
#include <bits/stdc++.h> 
using namespace std; 
/* for better solution save how many divisor of the number
//this is according to the seive algorithm
#define mx 100000
vector<int>dp(mx,0);
void divisor(){
    for(int i=1;i<=mx;i++)
        for(int j=i;j<=mx;j+=i)
            dp[j]++;

}
*/
int countDivisors(int n){ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            if (n / i == i) 
                cnt++; 
  
            else 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 
int main() { 
    cout<<countDivisors(100); 
    return 0; 
} 