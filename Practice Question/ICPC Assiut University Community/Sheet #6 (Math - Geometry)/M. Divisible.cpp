#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
      string s;
    ll x;
    cin>>s>>x;

    ll res = 0;
	for(int i=0;i<s.size();i++){ 
		res *= 10;
		res += s[i] - '0';
		res %= x;
	}
	if(res == 0){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
    return 0;
}