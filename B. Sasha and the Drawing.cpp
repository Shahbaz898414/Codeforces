#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {

    ll n,k;cin>>n>>k;

    ll cnt=n+n-2;

    if(k<=cnt*2)  cout<<(k+1)/2<<endl;
    else{
      cout<<"YES"<<cnt<<endl;

      k -= cnt*2;
      cout<<cnt+k<<endl;

    }
  }
}


/*


the answer to the problem is at least (k+1)/2.If(k<=(4*n-2)). Otherwise  k -= (4*n-2); cout<<cnt+k<<endl;

*/