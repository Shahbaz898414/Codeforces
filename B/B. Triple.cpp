

    #include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;cin>>t;
  while(t-->0){
    ll n,check=0,ch=1;cin>>n;

    ll a[n],b[n];

    map<ll,ll> ma;
    
    for (int i = 0; i < n; i++) {
      cin>>a[i];
     
    }
    

    sort(a,a+n);
    // for (int i = 0; i < n; i++)
    // {
    //   /* code */
    //   cout<<a[i]<<" ";
    // }
    // cout<<endl;

    for (ll i = 0; i <n; i++)
    {

      int j=i+1;
      
      while(a[i]==a[j] and j<n){
        ch++;
        j++;
      }
      if(ch>=3){
        cout<<a[j-1]<<endl;
        check=1;
        break;
      }
    }

    if(check==0){
      cout<<-1<<endl;
    }

    
  }
  
  return 0;
}
 
 