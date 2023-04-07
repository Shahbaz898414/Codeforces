#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

    ll n,k,b=0;cin>>n>>k;
    
    string s,a="";cin>>s;

    cout<<s.find('a')+1<<endl;

    for (int i = 0; i < n; i++)
    {
      /* code */
      if(s[i]!='a'){
        a[i]+=s[i];
      }
    }

 // ll w=s.find(alpha);

            // s.erase(remove(s.begin(), s.end(), w), s.end());
    cout<<a<<endl;
    
    
    return 0;
}

