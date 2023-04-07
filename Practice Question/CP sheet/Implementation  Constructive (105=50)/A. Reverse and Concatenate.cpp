#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    
    string P = s;
     
    reverse(P.begin(), P.end());

    if (s == P) {
       return true;      
    }
    else {
      return false;
    }
}

int main() {

  int t;cin>>t;
  while(t--){
     int n,k;cin>>n>>k;

    string s;cin>>s;

    set<char> s1;
    for(auto x:s){
        s1.insert(x);
    }    
    if(s1.size()==1){
        cout<<1;
        return 0;
    }
    if(k==0){
      cout<<1;
      return 0;
    }

    

    // if(isPalindrome(s)){
    //   cout<<1<<endl;
    // }else{
    //   cout<<2<<endl;
    // } 

   }

}