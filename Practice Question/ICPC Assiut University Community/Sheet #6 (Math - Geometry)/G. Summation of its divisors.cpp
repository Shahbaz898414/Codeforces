#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,c=0;
    cin>>n;

    ll h=sqrt(n);

    for(ll i=1;i<=h;i++){
      if(n%i==0){
        c+=i;

         if(n/i!=i){
          c+=n/i;
        }
      }
      
    }

    cout<<c<<endl;

    
    
    return 0;
} 