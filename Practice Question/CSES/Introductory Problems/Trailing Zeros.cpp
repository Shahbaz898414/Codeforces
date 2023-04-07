
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int findTrailingZeros(ll n) {
	if (n < 0) 
		return -1;
	int count = 0;
	
	for (int i = 5; n / i >= 1; i *= 5)
		count += n / i;

	return count;
}


int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

	ll n;cin>>n;
	cout<< findTrailingZeros(n);
	return 0;
}
