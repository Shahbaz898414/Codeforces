#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;cin>>s;
    // cout<<s.size()<<endl;

  for (int i = 0; i < s.size(); i++)
  {
    if(s[i]=='E'&& s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P'&& s[i+4]=='T'){
     i+=4;
      cout<<" ";
    }else{
      cout<<s[i];
    }
    
  }
  // cout<<s.size()<<endl;
  

  return  0;
}