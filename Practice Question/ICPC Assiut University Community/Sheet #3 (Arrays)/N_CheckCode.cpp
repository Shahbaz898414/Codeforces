#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  
  ll a,b;
  cin >>a>>b;
  
  string s;
  cin>>s;

  if(a+b+1 != s.size()){
    cout<<"No"<<endl;
    return 0;
  }

  if(s[a] !='-'){
    cout<<"No"<<endl;
    return 0;
  }
    int c=0;

  for(int i=0;i<s.size();i++){
    if(s[i]>=48 && s[i]<=57 && i !=a){
        c++;
    }
  }
  if(c==a+b){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
    
  return 0;
}
 
// 3 3
// 269-665
// 1 1
// 12-
// 1 2
// 7444

