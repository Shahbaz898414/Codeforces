#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;
    cin>>t;
    while (t--) {
        ll n,max1=INT_MIN;
        cin>>n;
        ll a[n];

        for (int i = 0; i <n; i++) {
          cin>>a[i];
          

        }

        sort(a,a+n);

        ll blue=a[0]+a[1],red=a[n-1];

        

        ll l=2,r=n-2;
        bool flag=false;
        while(l<r){
          if(red>blue){
            flag=true;
            break;
          }
          blue+=a[l];red+=a[r];
          l++,r--;
        }

        if( red>blue){
          cout<<"YES"<<endl;
        }else{
          cout<<"NO"<<endl;
        }
    }
  return 0;
}