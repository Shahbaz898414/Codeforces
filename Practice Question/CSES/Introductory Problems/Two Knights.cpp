#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll t;
  cin >> t;
  for(ll i = 1; i <=t; i++) {
    cout<<(((i*i)*((i*i)-1)-8-24-(16*(i-4))-16-((i-4)*24)-(i-4)*(i-4)*8))/2<<endl;
  }
  
  return 0;
}