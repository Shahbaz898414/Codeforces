#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
        while(t--) {
          ll n;cin>>n;

          ll min1=INT_MAX;

          vector<ll> v;

          while(n>0){
            v.push_back(n%10);
            
            n/=10;
          }
        

          if(v.size()==2){
            swap(v[0],v[1]);

            cout<<v[1]<<endl;
          }else{
             cout<<*min_element(v.begin(),v.end())<<endl;
          }
            
        }

    return 0;
}
