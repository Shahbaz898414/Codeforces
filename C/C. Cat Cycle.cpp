#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;
    while(t-->0){

      ll n,k;cin>>n>>k;
      k--;
     if(n%2==0){
      cout<<1+k%n<<endl;
     
     }else{
      //  k--;
      ll isec=k/((n-1)/2);
      cout<<1+(k+isec)%n<<endl;
     }


    }

    return 0;
    
}


