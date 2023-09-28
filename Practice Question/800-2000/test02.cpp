#include <iostream>
#include <vector>
#define ll long long
using namespace std;

const ll MOD = 1000000007;

// Function to calculate the factorial of a number modulo MOD
long long factorial(int n)
{
  long long result = 1;
  for (int i = 1; i <= n; i++)
  {
    result = (result * i) % MOD;
  }
  return result;
}

int main()
{

  ll t;
  cin >> t;

  while (t--)
  {
    ll N, X;
    cin >> N >> X;

    vector<ll> A(N);
    ll even_count = 0, odd_count = 0;

    for (ll i = 0; i < N; i++)
    {
      cin >> A[i];
      if (A[i] % 2 == 0)
      {
        even_count++;
      }
      else
      {
        odd_count++;
      }
    }

    // Calculate the factorial of even_count and odd_count
    long long even_factorial = factorial(even_count);
    long long odd_factorial = factorial(odd_count);

    // Calculate the total count of valid permutations
    long long result = (even_factorial * odd_factorial) % MOD;

    cout << result << endl;
  }

  return 0;
}
