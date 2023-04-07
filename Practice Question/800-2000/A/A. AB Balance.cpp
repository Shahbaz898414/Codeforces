#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
      string s;
      cin>>s;
      int n=s.size();
      if(s[0]==s[n-1]) {
          cout<<s;
      }
      else {
          s[0]=s[n-1];
          cout<<s;
      }
      cout<<endl;
    }
}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
int t;
cin>>t;
while(t--)
{
cin>>s;
s[0]=s[s.size()-1];
cout<<s<<endl;
}
} 
*/