#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

int32_t main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {

     ll n,k;
    cin>>n>>k;
    vector<ll> ans;
    ll x=n-k;
    int a=(x+1)/2;
    int b=x/2;
    ans.push_back(1);
    ans.push_back(n);
    int k2=k/2;
    for(int i=1;i<k/2;i++){
        int adiff,bdiff;
        if(a%k2!=0){
            adiff=(a/k2)+1;
            a-=((a/k2)+1);
        }
        else{
            adiff=(a/k2);
            a-=((a/k2));
        }
        if(b%k2!=0){
            bdiff=(b/k2)+1;
            b-=((b/k2)+1);
        }
        else{
            bdiff=(b/k2);
            b-=((b/k2));
        }
        ans.push_back(ans[ans.size()-2]+adiff+1);
        ans.push_back(ans[ans.size()-2]-(bdiff+1));
        k2--;
    }
    for(int i=k;i<n;i++){
        if(i%2==0)
          ans.push_back(ans[i-k]+1);
        else
          ans.push_back(ans[i-k]-1);
    }

    for(auto it:ans) {

      cout<<it<<" ";

    }

    cout<<endl;

  }
  return 0;
}
