#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
    ll t;cin>>t;

    while(t-->0){
            int n,k;
            cin>>n>>k;
            int m=n*k;
            vector<int>a(m);
            for(int i=0;i<m;i++){
              cin>>a[i];
            }
                
            ll total=0;
            if(n==2){
                for(int i=0;i<m;i+=2)
                    total+=(ll)(a[i]);
                cout<<total<<"\n";
               continue;
            }
            int interval=(n+1)/2;

            int left=n-interval;
            // cout<< interval<<" i"<<endl;
            left++;
            int x=1;
            int in=0;
            // cout<<left<<"  left"<<endl;
            for(int i=m-1;i>=0;i--){
                if(x%left==0){  //3 11 12 | 22 33 35 | 38 67 69 | 71 94 99
                    total+=a[i];
                    // cout<<a[i]<<" total"<<endl;
                    in++;
                }
                x++;
                if(in>=k)
                    break;
            }
            // cout<<total<<"\n";
    }

    return 0;
}