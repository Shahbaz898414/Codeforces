#include<bits/stdc++.h>
#define int int long long
using namespace std;

int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int32_t  main() {
    // fastio

   

int a,b;
cin>>a>>b;
int x=gcd(a,b);
cout<<x<<" "<<(a/x)*b;
	return 0;
}