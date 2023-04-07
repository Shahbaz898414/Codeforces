#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll n,m,d,next,total;
  cin>>n>>m;
  int isl=false,stop=true;
  for(int i=n;i<=m;i++){
    d=i;
    total=i;
    while(d>0){
      next=d%10;
      d /=10;
      if(next ==7 || next==4){
        isl=true;
        if(d==0){
          stop=false;
          cout<<total<<" ";
        }
      }
      else{
        isl=false;
        break;
      }
    }
  }
  if(isl==false && stop==true){
    cout<<-1;
  }
  
  return 0;
}