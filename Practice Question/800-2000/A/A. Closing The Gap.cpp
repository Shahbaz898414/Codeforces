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

      ll n,c=0;cin>>n;

      ll a[n];
      for (int i = 0; i < n; i++)
      {
        /* code */
        cin>>a[i];
        c+=a[i];
      }

      if(c%n==0){
        cout<<0<<endl;
      }else{
        cout<<1<<endl;
      }
      


    }

    return 0;
    
}


