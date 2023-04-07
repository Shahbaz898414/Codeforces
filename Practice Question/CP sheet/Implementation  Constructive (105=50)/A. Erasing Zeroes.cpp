#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;

        int c=0,k=0,m=0;
        for (int i = 0; i <s.length(); i++) {
          if(s[i]=='1'){
            k=i;
            break;
          }
        }

        for (int i = s.length(); i >=k; i--)
        {
          if(s[i]=='1'){
            m=i;
            break;
          }
        }
        

        for (int i = k; i <m; i++)
        {
          if(s[i]=='0'){
            c++;
          }
        }
        
        cout<<c<<endl;

    }
}
