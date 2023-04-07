

    #include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;cin>>t;
  while(t-->0){
    ll n,check=0,ch=0;cin>>n;

    ll a[n],b[n],zemax=0;
    bool flag=true;
    set<ll> s;
    for (int i = 0; i < n; i++) {
      cin>>a[i];
    }

    for (int i = 0; i < n; i++) {
      cin>>b[i];
      
    }

     for(long long i=0;i<n;i++){
        if(b[i]==0){
            zemax=max(zemax,a[i]);
        }
        else if(b[i]>a[i]){
            cout<<"NO"<<endl;
            check=1;
            break;
        }
        else{
            s.insert(a[i]-b[i]);
        }
    }

    if(check==0){
      if(s.size()==0){
          cout<<"YES"<<endl;
          
      }
      else if(s.size()==1){
          for(auto x:s){
              if(x>=zemax){
                cout<<"YES"<<endl;
                  ch=1;
                  break;
              }
          }

          if(ch==0){
            cout<<"NO"<<endl;
          }
          // no
      }
      else{
          cout<<"NO"<<endl;
      }
    }
    

    
    
  }
  
  return 0;
}
 
 