#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// void subString(string s, int n)
// {    
//     for (int i = 0; i < n; i++)
//         for (int len = 1; len <= n - i; len++){
//             //  ll d=__builtin_popcountll(s.substr(i, len));
//             // ll w=__builtin_clzll(s.substr(i, len));
//         }
// }

// void printSubstrings(string str)
// {
//     for (int i = 0; i < str.length(); i++) {
//         string subStr;   
//         for (int j = i; j < str.length(); j++) {
//             subStr += str[j];
//             // ll d=__builtin_popcountll(subStr);
//             // ll w=__builtin_clzll(subStr);
//         }
//     }
// }

// void printAllSubstrings(string s, int n) {
//   ll r=-1,q=0,e;
//     for (int i = 0; i < n; i++){
//         char temp[n - i + 1];
//         int tempindex = 0;
//         for (int j = i; j < n; j++) {
//             temp[tempindex++] = s[j];
//             temp[tempindex] = '\0';

//             int min1=min(d,w);
//             if(min1>r){
//               r=min1;
//             }
//             // if(d>w){
//             //   r=d;
//             // }else{
//             //   q=w;
//             // }
//             // if(r>q){
//             //   r=e;
//             // }else{
//             //   q=e;
//             // }
//         }
//     }
//     cout<<r<<endl;
// }

int main() {
  int t;cin>>t;

  while(t--){
    string s;cin>>s;
    if(s.size()==1){
      cout<<0<<endl;
    }else{
      // subString(s,s.length());
      //  printAllSubstrings(s, s.length());
    }

  }
  
  return 0;
}