#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

 
    ll m,n;cin>>m>>n;
    if(m==2){
      cout<<n<<endl;
    }else if(m>2){
      if(m==n){
         ll g=n+m-2;
         cout<<g<<endl;
      }else if(m>n){
        if(m%2==0){
          int g=m/2;
          cout<<g*n<<endl;
        }else{
          int h=m%2;
          int f=m/2;
          if(n%2==0){
            cout<<f*n+n<<endl;
          }else{
            cout<<f*n+(n/2)<<endl;
          }
        }
      }
      else{
        if(m%2==0){
          cout<<m/2+n<<endl;
        }else{
          if(n%2==0){
            cout<<n+n/2<<endl;
          }else{
            cout<<n+n/2<<endl;
          }
        }

      }
     
    }else if(m<2){
      if(n%2!=0){
        cout<<n/2<<endl;
      }else{
        cout<<n/2<<endl;
      }
    }


    // original solution
    // int M, N;
    // cin >> M >> N;
    // cout << M * N / 2 << endl;
     
  // }

  
 
  return 0;
}