#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll Equation(int x,int n){

  ll s=0;
    for (ll i = 2; i <= n; i+=2) {

     s += pow(x,i);
    
    }

    return s;
}

int main() {

  ll x,n;
  cin>>x>>n;
  cout<<Equation(x,n)<<endl; 
 return 0;
}

