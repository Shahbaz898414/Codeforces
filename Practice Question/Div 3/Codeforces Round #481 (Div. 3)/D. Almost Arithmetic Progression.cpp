#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n,i,j,k,l,m;
    cin>>n;
    vector<ll> a(n);
    for(i=0;i<n;i++)
    cin>>a[i];
    if(n<=2)
    cout<<0<<"\n";
    else{
        ll ans=INT_MAX,prev,f;
        for(ll a1=-1;a1<=1;a1++){
            for(ll b=-1;b<=1;b++){
                ll x,y;
                x=a[0]+a1;
                y=a[1]+b;
                k=y-x;
                prev=y;
                l=abs(a1)+abs(b);
                f=0;
                for(i=2;i<n;i++){
                    if(a[i]==(prev+k))
                    {
                        prev=a[i];
                    }
                    else if((a[i]+1)==(prev+k)){
                        prev=a[i]+1;
                        l++;
                    }
                    else if((a[i]-1)==(prev+k)){
                        prev=a[i]-1;
                        l++;
                    }
                    else{
                        f=1;
                        break;
                    }
                }
                if(f==0)
                ans=min(ans,l);
                // debug(k)
                // debug(ans)
            }
        }
        if(ans==INT_MAX)
        cout<<-1<<"\n";
        else{
            cout<<ans<<"\n";
        }
    }

  
  
  return 0;
}