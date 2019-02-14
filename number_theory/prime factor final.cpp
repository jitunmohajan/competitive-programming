#include<bits/stdc++.h>
using namespace std;
int main()
{
cout << "Enter a number: ";
int num;
cin >> num;

cout<<"The prime factors are: ";



for (int i=2; i <= num; i++)
{
 while(num % i == 0)
 {
   num /= i;// "num" divided by "i" is now "num"
   answer+=i;
   cout<<i<<" ";
 }
}
}
Edit & Run
