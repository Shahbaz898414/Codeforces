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
    ll t;cin>>t;

    while(t-->0){
      ll n,m,x,y;cin>>n>>m>>x>>y;
      char a[n+1][m+1];
      ll sum1=0,sum2=0;

        int s=0;
        int d=0;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                cin>>a[i][j];
            }
        }
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                if(a[i][j]=='.') {
                    if(j==m) {
                        d++;
                    } else {
                        if(a[i][j+1]=='.') {
                            s++;
                            j++;
                        } else
                            d++;
                    }
                }
            }
        }
        int ans;
        if(y>=2*x) {
            ans=d*x+s*2*x;
        } else {
            ans=d*x+s*y;
        }
        cout<<ans<<endl;
    }  

    return 0;
}