
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll t;cin>>t;
  while(t--) {
    ll n,c=0;cin>>n;

    string s=to_string(n);

    ll d=s.size();

    if(d==1){

      if(s[0]%2==0){
        cout<<0<<endl;
      }else{
        cout<<-1<<endl;
      }
      

    }else{

        if(s[d-1]%2==0){
          cout<<0<<endl;
        }else if(s[0]%2==0){
          cout<<1<<endl;
        }else{
          for (int i = 0; i < d; i++){
          
              if(s[i]%2==0){
                reverse(s.begin(),s.begin()+i+1);
                //  cout<<s<<endl;
                c++;

              }

              if(s[0]%2==0){
                // cout<<1<<endl;
                c++;
                // cout<<s<<endl;
                break;
              }
             if(s[d-1]%2==0){
                // cout<<0<<endl;
              
                break;
              }
          }

          if(c>0){
            cout<<c<<endl;
          }else{
            cout<<-1<<endl;
          }

          // cout<<s;
        }

    }


   

   
    

    // ll a[d];

    // vector<ll > v(d);

    // while(n>0){
    //   ll e=n%10;
    //   v.push_back(e);

    //   n/=10;
    // }

    // reverse(v.begin(),v.end());

    // for ( int i=0;i<d;i++)
    // {
    //   /* code */
    //   cout<<it<<" ";
    // }
    
    // cout<<endl;
    
  }
  
  return 0;
}