#include<bits/stdc++.h>
#include <iostream>

using namespace std;
void solve(){
    int n;
    cin>>n;
    int ans=0,temp=0;
    vector<int>count(1005,0),uniq(1005,0);
    for(int i=0;i<n;i++){
        cin>>temp;
        count[temp]++;
    }
    for(int i=1;i<1005;i++){
        uniq[i]+=uniq[i-1];
        if(count[i]>0){
            uniq[i]++;
        }
    }
    for(int i=1;i<1005;i++){
        if(count[i]>0){
            if(count[i]>2) ans++;
            for(int j=i+1;j<1005;j++){
                if(count[j]==0) continue;
                if(count[i]>=2 and 2*i>j) ans++;
                if(count[j]>=2) ans++;
                if((i+j)>=1001){
                    ans+=(uniq[1001]-uniq[j]);
                }else{
                    ans+=(uniq[i+j-1]- uniq[j]);
                }
            }
        }
    }
    cout<<ans;
    //cout<<"\n";
    return;
}
int main()
{
    solve();
}