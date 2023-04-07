#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  int t;cin>>t;
  while(t--) {
    int n,k;cin>>n>>k;

    int a[n],b[n];

    for (int i = 0; i < n; i++)
    {
      /* code */
      cin>>a[i];
    }

     for (int i = 0; i < n; i++)
    {
      
      cin>>b[i];

    }

    vector<pair<int,int>> p;
    for (int i = 0; i < n; i++)
    {
      /* code */
      p.push_back(make_pair(a[i],b[i]));
    }

    sort(p.begin(),p.end());
    int ans=k;

    for (int i = 0; i < n; i++)
    {
      if(p[i].first<=ans){
        ans=ans+p[i].second;
      }else if(p[i].first>ans){
        break;
      }
    }
    
    
    cout<<ans<<endl;
  }
  return 0;
}