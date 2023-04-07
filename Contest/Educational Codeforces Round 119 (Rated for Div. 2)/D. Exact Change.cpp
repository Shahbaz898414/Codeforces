#include<bits/stdc++.h>
#define ll long long
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define pb push_back
using namespace std;


int main() {
   
    ll t;
    cin>>t;

    
    while(t--){
     int n;
     cin>>n;
     ll min=10000000000,max=0,h=0;
     ll a[n];
     for(int i=0;i<n;i++){
       cin>>a[i];
     }

     for(int i=0;i<n;i++){
       if(a[i]>max){
         max=a[i];
       }
       if(a[i]<min){
         min=a[i];
       }
     }
     sort(a,a+n);
    //  cout<<min<<" min"<<endl;

     if(max==1){
       cout<<1<<endl;
     }else if(max==2){
       cout<<1<<endl;
     }else if(max==3){
       cout<<1<<endl;
     }else{
          int u=max%3;
          int g=max/3;
          // cout<<g<<" g"<<endl;
          if(min==1){
            cout<<g+1+1<<endl;
          }else{
             cout<<g+1<<endl;
          }
         
     }
    }
    return 0;
}


// 446
// 4
// 3
// 260
