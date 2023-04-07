#include<bits/stdc++.h>
using namespace std;

int main() {
  
    string s;
    cin>>s;
    int d=s.size();

    for(int i=0;i<d;i++){
     if(s[i]!=s[d-1]){
       cout<<"NO"<<endl;
       return 0;
     }else{
       d--;
     }
    }
      cout<<"YES"<<endl;

  return 0;
}