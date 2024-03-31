#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;
    cin>>t;
    while (t--) {
        ll n,max1=INT_MIN;
        cin>>n;
       map<int,int> m;
       for (int i = 0; i < n; i++) {
         
         int x;cin>>x;
         m[x]++;
       }

       vector<int> ans;
       for (int k =1; k <=n; k++) {
         
         if(k<=m.size()){
           ans.push_back(m.size());
         }else{
           int y=ans[ans.size()-1];
           ans.push_back(y+1);
         }
       }
       
        for(auto it:ans){
          cout<<it<<" ";
        }

        cout<<endl;
    }
  return 0;
}