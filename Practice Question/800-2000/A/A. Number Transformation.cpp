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
      ll x,y;cin>>x>>y;

      if(y%x==0){
        cout<<1<<" "<<(y/x)<<endl;
      }else{
        cout<<0<<" "<<0<<endl;
      }
    }

    return 0;
}