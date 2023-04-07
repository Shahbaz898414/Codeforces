#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll t;
  cin >> t;
  
  ll a[t];
  set<ll> s;

  for (int i = 0; i < t; i++)
  {
    /* code */
    cin>>a[i];
    s.insert(a[i]);
  }

  cout<<s.size()<<endl;
  
  return 0;
}