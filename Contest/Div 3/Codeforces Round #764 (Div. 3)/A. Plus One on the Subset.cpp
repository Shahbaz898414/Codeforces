#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  int t;cin>>t;
  while(t-->0){
    int n;cin>>n;

    ll a[n],mi=INT_MAX,ma=INT_MIN;
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];

      if(a[i]<mi){
        mi=a[i];
      }
      if(a[i]>ma){
        ma=a[i];
      }
    }

    cout<<abs(ma-mi)<<endl;
    
  }
}