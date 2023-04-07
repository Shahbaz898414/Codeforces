#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll sum (ll n){
    return n * (n + 1) / 2;
}
int main() {
	ll n1,n2,c;
	cin>>n1>>n2>>c;
	ll ma = max(n1,n2);
	ll mi = min(n1,n2);
 	cout<<(sum(ma/c) * c) - (sum((mi-1) / c) * c);
}