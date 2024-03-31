#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll t;cin>>t;
  while(t-->0){

    ll n,k;cin>>n>>k;

    string s;cin>>s;

    vector<int> v(0,n);

    if(k==0){
      cout<<s<<endl;
      for (int i = 0; i < n; i++)
      {
        cout<<0<<" ";
      }
      cout<<endl;
      continue; 
    }

    if(k%2==0){
      for (int i = 0; i < n; i++)
      {
        if(s[i]=='1'){
          k--;
          v[i]=1;
          if(k==0){
            for (int j=i+1;j<n;j++)
            {
              if(s[j]=='1'){
                s[j]='0';
              }else{
                s[j]='1';
              }
              
            }

            break;
            
          }
          
        }else{
          s[i]='1';
          v[i]=0;
        }
      }
      if(k%2){
        s[n-1]='0';
        if(v[n-1]==1){
          v[n-1]=0,k++;
        }else{
          v[n-1]=1,k--;
        }
      }
      v[0]+=k;
      
    }else{
      for (int i = 0; i <n; i++)
      {
        
        if(s[i]=='0'){
          s[i]='1';
          k--;
          v[i]=1;
          if(k==0){
            break;
          }
        }else{
          v[i]=0;
        }
      }
      if(k%2){
        s[n-1]='0';
        if(v[n-1]==1){
          v[n-1]=0,k++;
        }else{
          v[n-1]=1,k--;
        }
      }

      v[0]+=k;
      
    }

    cout<<s<<endl;
    for (int i = 0; i < n; i++)
    {
      cout<<v[i]<<" ";
    }
    cout<<endl;
    
  }
  
  return 0;
}