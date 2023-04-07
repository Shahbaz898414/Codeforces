#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n,sum=0,dum=0;cin>>n;

    set<pair<int,pair<int,int>>>ans;

   for(int h=1;h<n+1;h++) {
        int k,sum=0;cin>>k;
        int a[k];

        for (int i = 0; i <k; i++) {
            cin>>a[i];
            sum+=a[i];
        }

        for (int i=0; i<k;i++) {
           ans.insert({sum-a[i],{h,i+1}});
        }
    }

    pair<int,pair<int,int>> pre=*(ans.begin());
    bool d=0;

    for(auto elem:ans){
        if(elem==*(ans.begin())){
            continue;
        }
        if(pre.first==elem.first and pre.second.first != elem.second.first){
            cout<<"YES"<<endl;
            cout<<pre.second.first<<" "<<pre.second.second<<"\n";
            cout<<elem.second.first<<" "<<elem.second.second;
            d=1;
            break;
        }else{
            
            pre=elem;
        }
     }

     if(!d){
         cout<<"NO"<<"\n";
     }
    return 0;
}