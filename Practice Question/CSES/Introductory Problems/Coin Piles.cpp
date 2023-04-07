#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;

int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll t;
  cin >> t;

  while (t-- > 0) {
    ll a, b;
    cin >> a >> b;
    if(b>a){
      swap(a,b);
    }

    if(a>2*b || (a+b)%3!=0){
      cout<<"NO"<<endl;
    }else{
      cout<<"YES"<<endl;
    }
  }
  return 0;
}
