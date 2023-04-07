#include<bits/stdc++.h>
using namespace std;

int main() {
  
    string s;
    cin>>s;
    int d=s.size();

    for(int i=0;i<d;i++){
      if(s[i]==','){
        cout<<" ";
      }else if(islower(s[i])){
        char a=s[i]-32;
        cout<<a;
      }else if(isupper(s[i])){
        char b=32+s[i];
        cout<<b;
      }
    }
  
  

 
  return 0;
}