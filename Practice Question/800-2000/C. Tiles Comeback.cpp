#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define mod 998244353



void solve() {
   ll n,k;cin>>n>>k;

   vector<ll> arr(n);

   for (ll i = 0; i < n; i++) {
    cin>>arr[i];
   }


   int k1=0,k2=0;
   for (int i = 0; i < n; i++) {
    if(arr[i]==arr[0])k1++;
    if(arr[i]==arr[n-1] and k1>=k) k2++; 
   }

   
   
  if(k2>=k||(arr[0]==arr[n-1]&&k1>=k)) cout<<"YES"<<endl;

	else cout<<"NO"<<endl;
   
   
}


int main()
{

  int t;
  cin >> t;
  while (t--) {

   solve();
    

  }


}





