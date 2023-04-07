#include<bits/stdc++.h>
#define ll long long
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define pb push_back
using namespace std;


int main() {
   
    ll t;
    cin>>t;
    // cout<<"t is:"<<t<<endl;
    while(t--){
      int n;
      cin>>n;
      string s[n-2];
      for(int i=0;i<n-2;i++)cin>>s[i];
      for(int i=0;i<n-2;i++)cout<<s[i];
      cout<<endl;
    }
    return 0;
}