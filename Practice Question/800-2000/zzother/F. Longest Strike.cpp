#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      int n, k,cnt=0;
      cin >> n >> k;
      int a[n];
      map<int, int> mp;
      for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
      }
      vector<int> c;
      for(auto x : mp) {
        if(x.second >= k) {
          c.push_back(x.first);
        }
      }
      if(c.size() == 0) {
        cout << -1 << endl;
        continue;
      }

    
        sort(c.begin(), c.end());
        for(auto it:c){
          cout<<it<<" ";
        }
        cout<<endl;
        int mx = 0;
        int lans = c[0], rans = c[0];
        int l = c[0];
        for(int i = 1; i < c.size(); i++) {
          if(c[i]-1 == c[i-1]) {
            if(c[i]-l > mx) {
              lans = l;
              rans = c[i];
              mx = c[i]-l;
            }
          }
          else {
            l = c[i];
          }
        }
        cout << lans << " " << rans << endl;
      
      
          
    }

    return 0;
    
}


