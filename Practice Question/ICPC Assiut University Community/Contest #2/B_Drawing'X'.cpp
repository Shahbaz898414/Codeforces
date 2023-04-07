#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
   ll a;
   cin>>a;
   for (int i = 0; i <a; i++){
     for (int z = 0; z <a; z++){
       if(i==z){
         if(i==a/2 && z==a/2){
           cout<<"X";
         }else{
            cout<<"\\";
         }
       }else if(i+z==a-1){
         cout<<"/";
       }
       else{
         cout<<"*";
       }       
     }
     cout<<endl;
   }
  return 0;
}






 
 