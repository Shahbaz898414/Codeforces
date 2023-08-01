#include <bits/stdc++.h>

using namespace std;

void find(long long n,map<int,int>&count){
    
    for(int i=2;i*i<=n;++i){
        while(n%i == 0){
            n/=i;
            count[i]++;
        }
    }
    if(n>1)count[n]++;
}

int main() {
    int t;
    cin>>t;
    
    while(t--){
         int n;
         cin>>n;
         
         long long A[n];
         vector<int>prime_factor;
         map<int,int>count;
         for(int i=0;i<n;++i){
             cin>>A[i];
             
             find(A[i],count);
              
         }
         
        //  for(auto it:count){
        //      cout<<it.first<< " "<<it.second<<endl;
        //  }
         int m = 0;
         int ex = 0;
         for(auto&x:count){
          //  cout<<x.first<<" "<<x.second<<"\n";
             m += (x.second/2);
             x.second%=2;
             ex += x.second;
         }
         
         m += (ex/3);
         
         
          
        cout<<m<<"\n"; 
         
          
    }
}