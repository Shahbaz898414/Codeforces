#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	int n = s.size();
	vector<int> v(n);
	v[0] = 0;
	for(int i=1; i<n; ++i) {
		v[i] = v[i-1]+(s[i] == s[i-1]);
	}
	int q; cin >> q;
	while(q--){
		int a, b; cin >> a >> b;
		a--, b--;
		cout << v[b]-v[a] << "\n";
  }

    return 0;
}