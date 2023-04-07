#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int lenOfLongIncSubArr(ll arr[], ll n) { 
	int max = 1, len = 1;
	
	for (int i=1; i<n; i++) {
	
		if (arr[i] > arr[i-1])
			len++;
		else {
			if (max < len)
				max = len;
			len = 1;
		}
	}
	
	if (max < len)
		max = len;
	
	return max;
}

int main() {

  ll g;cin>>g;
	ll arr[g];
   for (ll i=0; i<g;i++){
       cin>>arr[i];
    }

	cout<< lenOfLongIncSubArr(arr, g);
	return 0;	
}
