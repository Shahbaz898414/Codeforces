#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

    set<ll> s;

    for(ll i = 1; i <=200; i++) {
        

        s.insert(pow(2,i));
        s.insert(pow(2,i)-1);
        s.insert(pow(2,i)+1);
    }

    ll n;cin>>n;

        set<ll> e;
    ll a[n],b[100000],f=0;

    vector<ll> v;

    for(int i =0; i<n; i++) {
      cin>>a[i];
            if(s.count(abs(a[i]))){
                
                v.push_back(a[i]);
                
            }
           
    }

    cout<<v.size()<<endl;

    for (auto r:v) {
        cout<<r<<" ";
    }

    return 0;
}