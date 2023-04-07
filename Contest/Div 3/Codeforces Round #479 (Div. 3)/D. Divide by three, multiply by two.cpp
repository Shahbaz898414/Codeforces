#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
 ll  n;
 cin>>n;
 set<pair<int,ll>>s;
	for (int i = 0; i < n; i++) {
		ll x;cin>>x;
		ll og_x=x;
		int y_value=0;
		while(x%3==0){
			++y_value;
			x/=3;
		} 
		s.insert({-y_value,og_x});
	}
	for(auto y:s){
		cout<<y.second <<" ";
	} 
    return 0;
}