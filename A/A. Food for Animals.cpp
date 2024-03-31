#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;
    
    while(t-->0){

      ll a,b,c,x,y;cin>>a>>b>>c>>x>>y;

     if(a>=x and b>=y){
       cout<<"YES"<<endl;
     }else if(a>=x and b<y){
       b=y-b;
       if(c>=b){
         cout<<"YES"<<endl;
       }else{
         cout<<"NO"<<endl;
       }
     }else if(a<x and b>=y){

       a=x-a;
       if(c>=a){
         cout<<"YES"<<endl;
       }else{
         cout<<"NO"<<endl;
       }

     }else if(a<x and b<y){

       a=x-a;b=y-b;
       if(a+b<=c){
         cout<<"YES"<<endl;
       }else{
         cout<<"NO"<<endl;
       }

     }
    }

    return 0;
    
}


