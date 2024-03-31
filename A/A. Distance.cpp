#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;
    
    while(t-->0){

      ll x,y;cin>>x>>y;

      if(x % 2 == 0 && y % 2 == 0)
        cout<< x / 2 <<' '<< y / 2 <<endl;
      else if((x + y) % 2 == 1)
        cout<< -1 <<' '<< -1 <<endl;
      else
            if(x>=y){
                cout<<(x+y)/2<<" "<<"0\n";
            }else{
                cout<<"0 "<<(x+y)/2<<"\n";
            }

    }

    return 0;
    
}


