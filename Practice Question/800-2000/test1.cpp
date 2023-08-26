#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define ll long long


vector<int>  prefix1(string s){
    int n=s.size();
    vector<int> pi(n,0);
    for (int i = 1; i <n; i++)
    {
        /* code */
        int j=pi[i-1];

        while(j>0 and s[i]!=s[j]){
            j=pi[j-1];
        }

        if(s[i]==s[j]) j++;

        pi[i]=j;
    }

    return pi;
}





int main() {
  

  ll t;cin>>t;

  while(t--) {
    ll n;cin>>n;

    vector<ll>  arr(n);

    for (ll i = 0; i < n; i++)
        
        cin>>arr[i];
    
    
  }



    return 0;
}
