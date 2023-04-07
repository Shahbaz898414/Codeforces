#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  
  ll a;
  cin >>a;
  ll d[100];
  ll pre=0;
  ll next=1;

  for(int i=1;i<=50;i++){
    // if(i==1){
    //   cout<<"0"<<endl;
    // }else if(i==2){
    //   cout<<"1"<<endl;
    // }else{
    //   h=pre+next;
      
    // }

    if(i==1){
      d[i]=pre;
     pre=next;
     next=d[i];
    }else{
       d[i]=pre+next;
       pre=next;
      next=d[i];
    }
   
  }

  for(int i=1;i<=50;i++){
    if(i==a){
      cout<<d[i]<<" ";
    }
  }
  
  
  return 0;
}
 


