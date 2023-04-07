#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
#define dbg printf("in\n")
#define nl printf("\n");
#define N 300110
#define inf 10000000000000000
#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)
#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d\n",n)
#define pfs(s) printf("%s",s)
#define pb push_back
#define pp pair<int,int>
using namespace std;
 
int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
    int i,j,k;
    int n,m;

    sff(n,m);

    int a[n];
    for(i=0;i<n;i++)
        sf(a[i]);

    ll ans=0;
    sort(a,a+n);

    k=n/2;

    ans=abs(a[k]-m);
    a[k]=ans;
    // cout<<ans<<" first"<<endl;

    for(i=0;i<k;i++) {
        if(a[i]<=m)
            continue;
        else{

        //  cout<<a[i]-m<<"  -m" <<endl;
            ans+=(a[i]-m);

        }
   
    }

    for(i=k+1;i<n;i++) {
        if(a[i]>=m)
            continue;
        else{

          // cout<<m-a[i]<<"  +m"<<endl;
          ans+=(m-a[i]);

        }
            
      // cout<<ans<<endl;
    }

    pfl(ans);

    return 0;
}