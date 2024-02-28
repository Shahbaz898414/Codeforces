#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define mod 998244353

int main()
{

  int t;
  cin >> t;
  while (t--) {

    ll n,x;cin>>n>>x;

    ll ans=0;

    for (ll i =1; i*i <=(n-x); i++)
    {
      
      if((n-x)%i==0){
        if(i%2==0 and (i+2)/2>=x){
          ans++;
          
        }
        if(n-x!=i*i and ((n-x)/i)%2==0 and ((n-x)/i + 2)/2>=x){
            ans++;
          }
      }
    }


    for (ll i = 1;x!=1 and i*i <=(n+x-2); i++)
    {
      
      if((n+x-2)%i==0){
        if(i%2==0 and (i+2)/2>x) ans++;

        if( (n+x-2) != i*i and ((n + x - 2)/i) % 2 == 0 and ((n+x-2)/i + 2)/2>x){
          ans++;
        }
      }
    }
    
    cout<<ans<<endl;

  }


}




/*

All numbers repeat every 2k - 2 positions. If the boy Vasya's number is calculated to be x, then it can be at positions of the form
(2k - 2) · t + x, or (2k - 2) · t + k + k -x, for some non-negative t. This is true for all x, except for x = 1 and x = k ~--- for
these values, there is only one option left.

Let's fix one of the options, the second one will be analogous. We need to find how many different values of k satisfy the equation
(2k-2). t+ x = n, for some non-negative t. It is not difficult to see that this holds if and only if n - x is divisible by 2k - 2.
Therefore, it is necessary to find the number of textbf{even} divisors of the number n - x. To consider the second case, it is necessary
to proceed similarly with the number n + x - 2. 


In this problem-solving scenario, we observe that numbers repeat every 2k - 2 positions, except for x = 1 and x = k, where there's only one option. By fixing one option, we find the number of even divisors of n - x and n + x - 2, respectively, to determine the valid values of k. This approach, leveraging the properties of divisors, enables us to efficiently solve the problem. 💡🔍 


*/