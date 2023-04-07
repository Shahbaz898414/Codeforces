#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

    ll n,k,b=0;cin>>n>>k;
    
    string s,a="";cin>>s;

   multiset<char> ans;

   for (char c:s) {
     ans.insert(c);
   }
 
   multiset<char> ans2;

   for(char d:ans){
     if(k>0)
     ans2.insert(d);
     --k;
   }

   for (char f:s) {
     auto it= ans2.find(f);
     if(it !=ans2.end()){
       ans2.erase(it);
     }else{
       a+=f;
     }
   }

   cout<<a<<endl;
   
    return 0;
}

