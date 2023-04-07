#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
      long long  a,b,c;
      cin>>a>>b>>c;
      if(a==0 && b==0 && c==0){
        a++;
        b++;
        c++;
        cout<<a<<" ";
        cout<<b<<" ";
        cout<<c<<" ";
      }

      else if(a>0 and b>0 and c>0){
        if(a==b && a==c){
        cout<<"1"<<" ";
       }else if(b==a && b==c){
        cout<<"1"<<" ";
       }else if(c==a && c==b){
        cout<<"1"<<" ";
       }
      }
      
      if(a>b and a>c){
        cout<<"0"<<" ";
        cout<<(a-b)+1<<" ";
        cout<<(a-c)+1<<" ";
      }
      else if(b>a and b>c){
        cout<<(b-a)+1<<" ";
        cout<<"0"<<" ";
        cout<<(b-c)+1<<" ";
        
      }
      else if(c>a and c>b){
        cout<<(c-a)+1<<" ";
        cout<<(c-b)+1<<" ";
        cout<<"0"<<" ";
        
      }
      cout<<endl;
    }
    return 0;
}
