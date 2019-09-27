//https://www.geeksforgeeks.org/find-value-1n-2n-3n-4n-mod-5/
// Program to find value of f(n)%5
#include <bits/stdc++.h>
using namespace std;

// function for obtaining remainder
int fnMod(int n)
{
    // calculate res based on value of n
    return (n % 4) ? 0 : 4;
}

// driver program
int main()
{
    int n = 43;
    cout << fnMod(n) << endl;
    n = 44;
    cout << fnMod(n);
    return 0;
}
/*
Find (1^n + 2^n + 3^n + 4^n) mod 5
// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return A mod B
int A_mod_B(string N, int a)
{
    // length of the string
    int len = N.size();

    // to store requried answer
    int ans = 0;
    for (int i = 0; i < len; i++)
        ans = (ans * 10 + (int)N[i] - '0') % a;

    return ans % a;
}

// Function to return (1^n + 2^n + 3^n + 4^n) % 5
int findMod(string N)
{
    // ?(5) = 4
    int mod = A_mod_B(N, 4);

    int ans = (1 + pow(2, mod) + pow(3, mod)
               + pow(4, mod));

    return (ans % 5);
}

// Driver code
int main()
{
    string N = "4";
    cout << findMod(N);

    return 0;
}


*/