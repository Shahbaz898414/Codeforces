#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n;
        ll a[n];

        deque<int> v;

        for (int i = 0; i < n; i++) {
          cin>>x;
          if(v.front()<x){
            v.push_back(x);
          }else{
            v.push_front(x);
          }
        }

        for(auto it:v){
          cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}