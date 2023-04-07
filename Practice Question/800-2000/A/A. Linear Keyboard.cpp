#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
        while(t--) {
                string s;
                cin>>s;
                ll a[26];
                ll i,n=s.size(),sum=0;
                for(i=0;i<n;i++){
                   a[s[i]-'a']=i;
                }

                string st;
                cin>>st;
                for(i=1;i<st.size();i++){

                  cout<<a[i]<<" ";
                  // sum=sum+abs(a[st[i]-'a']-a[st[i-1]-'a']);
                }
                
                // cout<<sum<<endl;
        }

    return 0;
}