#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ll t;cin>>t;
  while(t-->0){
     ll n,con=0;
     cin>>n;
     string s;cin>>s;

     ll d=s.size();

     if(s[0]=='9'){
      string ans2="";
      int c=0;
            for(int i=n-1;i>=0;i--) {
                int x=s[i]-'0';
                x+=c;
                if(x>1)
                {
                    int y=11-x;
                    c=1;
                    ans2+=(y+'0');
                }
                else
                {
                    c=0;
                    int y=1-x;
                    ans2+=y+'0';
                }
            }
            reverse(ans2.begin(),ans2.end());
            cout<<ans2<<endl;
     }else{

      for (int i = 0; i < n; i++) {
        cout<<9-(s[i]-'0');
      }
      cout<<endl;
     }

    
  }
 
  return 0;
}