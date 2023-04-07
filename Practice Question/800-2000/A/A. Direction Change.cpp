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

      ll a, b, x, dis, ans;
       cin >> a>> b;
       if(a > b) swap(a, b);
       if((a == 1 && b > 2) || (b == 1 && a > 2)) cout<<"-1";
       else if(a == b || a+1 == b){
            cout<<a+b-2;
       }
       else{
         x = 2*a+1;
         dis = b - a - 1;
         if(dis%2){
            ans = x + (dis-1)*2 + 3;
         }
         else{
            ans = x + dis*2;
         }
         cout<< ans-2;
       }
 
       cout<<endl;

    }

    return 0;
    
}


