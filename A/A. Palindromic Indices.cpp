#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {

    ll t;cin>>t;
    while(t-->0) {
      ll n,cnt=1;cin>>n;
      int sum=0;
      string s;cin>>s;
      vector<ll> pos;
      for (int i = 0; i <n; i++)
      {
        int j=i;
        while(j<n and s[i]==s[j]){
          j++;
        }
        // cout<<j-i<<"  j-i"<<endl;
        pos.push_back(j-i);
        j--;
        i=j;
      }
      int l=0;
      int r=pos.size();
      int mid=(l+r)/2;

      cout<<pos[mid]<<endl;


    }
      
      
  

  return 0;
}
