#include<bits/stdc++.h>
using namespace std;
  
int main(){
  string n,m,p,o;
  cin>>n>>m;
  cin>>p>>o;
  
  if((m.length())==(o.length())){
    if(m==o){
     cout<<"ARE Brothers";
   }
  }
  if(m!=o) {
    cout<<"NOT";
  }
   
  return 0;
}