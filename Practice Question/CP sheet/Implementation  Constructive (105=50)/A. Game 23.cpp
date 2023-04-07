#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    
    ll n,m;
    cin>>n>>m;
    ll d=m/n;
    ll cnt=0;
    bool check =true;
    if(m%n!=0)
        cnt=-1;
    else{

    while(d!=1) {
        if(d%2==0) {
            d/=2;
            cnt++;
        }
        else if(d%3==0) {
            d/=3;
            cnt++;
        }
        else {
            cnt=-1;
            break;
        }
    }

    }
    cout<<cnt<<endl;

    return 0;
}
