#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;
    cin>>t;
    while (t--) {
       ll x1,y1,x2,y2,x3,y3;cin>>x1>>y1>>x2>>y2>>x3>>y3;

       if((y1==y2 && y3<y1) ||(y2==y3 && y1<y2) || (y3==y1 && y2<y1)){
         if(y1==y2){
           cout<<abs(x1-x2)<<endl;
         }else if(y2==y3){
           cout<<abs(x2-x3)<<endl;
         }else{
           cout<<abs(x1-x3)<<endl;
         }
       }else{
         cout<<0<<endl;
       }

       

        
    }
  return 0;
}