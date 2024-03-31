#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {

    char i,j;
     
     unordered_map<string,ll> ma;
     ll q=1;
     for ( i = 'a'; i <='z'; i++){
      
       for ( j = 'a'; j <='z'; j++) {
        
        if(i==j){
          continue;
        }else{
          string e="";
          e+=i;
          
          e+=j;
          ma[e]=q;
         
        }
        q++;
       }
       
     }
    ll t;cin>>t;
    while(t-->0) {
     string s;cin>>s;
     cout<<ma[s]<<endl;

    }
    
    return 0;
}