#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;cin>>t;
  while(t--){
    string s;cin>>s;
    // reverse(s.begin(),s.end());
    // string g=s;
    // reverse(s.begin(),s.end());

    int d=0,last=s.size()-1,ans=0;

   while(d<=last)
    {
      /* code */
      if(s[d]==s[last]){
        ans++;
      }
      last--;
      d++;
    }

    int u=(s.size()-1)-ans;

    cout<<u<<endl;


  }
    
    return 0;
}