#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ll l,r,m;
  cin>>l>>r>>m;
  ll e=1;
  long long ma = max(l,r);//5
	long long mi = min(l,r);
  for (int i = mi; i <=ma; i++) {
    e*=i;
    e%=m;
  }

  cout<<e<<endl;
}