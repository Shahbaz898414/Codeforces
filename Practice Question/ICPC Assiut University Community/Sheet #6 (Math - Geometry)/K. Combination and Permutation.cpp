#include<bits/stdc++.h>
#define ll long long int
using namespace std;


ll fact(ll num) { 
	ll c = 1;
	ll re  = 1;
	while(c<=num){ 
		re  *= c;    
		c++; 
	}
	return re ;
}


int main() {
	ll a,b;
	cin>>a>>b;
	cout<<fact(a)/(fact(a - b) * fact(b))<<" ";
	cout<<fact(a)/(fact(a - b));

  return 0;
}



