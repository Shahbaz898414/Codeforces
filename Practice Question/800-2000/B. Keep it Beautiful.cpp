#include <bits/stdc++.h>

using namespace std;

#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define ff     first
#define ss     second
#define pb     push_back
#define ppb    pop_back


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    _test
    {
        int n;
        cin>>n;

        vector<int> a(n);
        for(auto &e: a)
            cin>>e;

        string ans = "";
        vector<int> x;

        int ok = 0;

        for(auto e:a){
          if(!ans.size()){
            ans+='1';
            x.push_back(a[0]);
            continue;
          }


          if(e>=x.back() and !ok){
            x.pb(e);
            ans+='1';
          }
          else if(!ok and e<=x.front()){
            ok=1;
            x.pb(e);
            ans+='1';
          }
          else if(ok and e>=x.back() and e<=x.front()){
            ok=1;
            x.pb(e);
            ans+='1';
          }else{
            ans+='0';
          }

        }

        cout<<ans<<"\n";
    }
}