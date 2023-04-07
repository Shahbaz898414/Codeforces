#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    for (int i = 0; i <n-1; i++){
      ans+=(s[i]-'0');
      cout<<(s[i]-'0')<<endl;
      cout<<" 1ans  "<<ans<<endl;
      if(s[i]-'0'>0){
        ans++;
        cout<<ans<<" ans"<<endl;
      }
    }
    ans+=(s.back()-'0');
    cout<<s.back()-'0'<<endl;
    cout<<ans<<endl;
    
  }
  return 0;
}

// int main(){
//     int t;
//   cin>>t;
//   while(t--){
//     int n;
//     cin>>n;
//     string x;
//     cin>>x;
//     int l=0;
//     for (int i = 0; i < n-1; i++){
//       if(x[i]-'0'!=0 && i!=n-1)
//        l+=1+(x[i]-'0');
//       else if(x[i]-'0'!=0)
//        l+=(x[i]-'0');
//     }
//     // ans+=(s.back()-'0');
//     // cout<<ans<<endl;
    
//   }
//   return 0;
// }