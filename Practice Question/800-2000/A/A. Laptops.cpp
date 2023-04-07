#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    ll n;cin>>n;
    // vector<pair<int,int>> vec;
    bool fl=false;
    
    for(int i=0;i<n;i++) {
        int x,y;cin>>x>>y;
        if(x!=y){
            fl=true;
            break;
        }
    }
    
    if(fl){
        cout<<"Happy Alex"<<endl;
    }else{
        cout<<"Poor Alex"<<endl;
    }

	return 0;
}