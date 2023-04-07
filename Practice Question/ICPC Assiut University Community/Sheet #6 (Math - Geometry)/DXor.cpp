#include<bits/stdc++.h>
using namespace std;
int main() {
	long long a,b,q;
	cin>>a>>b>>q;
  // cout<<(a ^ b)<<endl;
	long long res = q % 3;
  // cout<<res<<endl;
	if(res == 1){
		cout<<a<<endl;
	} else if (res == 2){
		cout<<b<<endl;
	} else {
		cout<<(a ^ b)<<endl;
	}
}