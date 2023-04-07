#include<bits/stdc++.h>
#define ll long long int
#define lls long long unsigned
using namespace std;

int main() {

     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  ll x;
  ll n,sum=0,t=0;cin>>n>>x;

  // sum+=x;
  while(n-->0){
    char c;
    int b;
    cin>>c>>b;

        if (c =='+') {
            x += b;
        } else if (b <= x) {
            x -= b;
        } else {
            t++;
        }
    
  }

  cout<<x<<" "<< t<<endl;
     
    return 0;
}