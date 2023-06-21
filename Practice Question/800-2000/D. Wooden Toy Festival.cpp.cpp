#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define _test   \
  int _TEST;    \
  cin >> _TEST; \
  while (_TEST--)
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back

// const int mxn = 200005;
// ll val[] = {1, 10, 100, 1000, 10000};
// ll dp[mxn][7][2], n;

bool solve(int mid,vector<ll> &v){
  vector<int> res;

  int val=v[0]-mid;
  res.push_back(val);
  for (int i = 1; i <v.size(); i++)
  {
    /* code */
    if(abs(val-v[i])>mid){
      val=v[i]-mid;
      res.push_back(val);
    }
  }
  
  if(res.size()<=3) return true;
  else return false;

}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, c[5003];
  cin >> t;
  while (t--) {
    ll n;cin>>n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++) cin>>v[i];
     


    sort(v.rbegin(),v.rend());
    int lo=0;
    int hi=1e9;
    int ans=1e9;

    while(hi>=lo){
      int mid=(lo+hi)/2;
      if(solve(mid,v)){
        ans=mid;
        hi=mid-1;
      }else {
        lo=mid+1;
      }
    }
     
    

  }
}