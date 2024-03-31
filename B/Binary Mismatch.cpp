#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;cin>>t;
  while(t--) {
    ll n,x,b,d,c=0,one=0,zero=0,i,j;
    cin>>n;

    string a;cin>>a;

  ll sum=0;
        
      ll  ai=-1,aj=-1;
        
        for(i=0; i<n; i++)
        {
            if(a[i]=='0'){
                sum++;
            }else{
                sum--;
            }
        }

        // cout<<sum<<endl;
        
        ll s1=0;
        j=0;
        
        for(i=0; i<n; i++) {
            if(a[i]=='0'){
                s1++;
            }else{
                s1--;
            }
            
            if(2*s1==sum) {
                ai=i+1;
                aj=j+1;
                break;
            }else if(sum>0 && s1<=0) {
                s1=0;
                j=i+1;
            }else if(sum<0 && s1>=0) {
                s1=0;
                j=i+1;
            }
        }
        
        // if(ai==-1){
        //     cout<<"NO\n";
        // }else{
        //     cout<<"YES\n";
        //     cout<<aj<<" "<<ai<<"\n";
        // }

  }

  return 0;
}