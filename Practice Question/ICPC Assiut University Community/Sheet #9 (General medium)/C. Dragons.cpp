#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
        
        ll s,n;
        cin>>s>>n;

        pair<int,int> a[100000];
        int c=1;
        
          
          for (int i = 0; i <n; i++){
            cin>>a[i].first>>a[i].second;
          }

          sort(a,a+n);

          for (int i = 0; i < n; i++) {
            
            if(s<=a[i].first){
              c=0;break;
            }else{
              s+=a[i].second;
            }
          }

           if(c==0){
              cout<<"NO"<<endl;
            }else{
              cout<<"YES"<<endl;
            }     

        return 0;
}