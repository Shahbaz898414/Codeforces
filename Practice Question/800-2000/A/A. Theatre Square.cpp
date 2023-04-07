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
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d\n",n)
#define pfs(s) printf("%s",s)
#define pb push_back
#define pp pair<int,int>
using namespace std;
 
int main() {
    // ll t;cin>>t;

    // while(t-->0){
        ll n,m,a;cin>>n>>m>>a;
        ll len=n/a,bre=m/a;

        if(n%a!=0){
          len++;
        }

        if(m%a!=0){
          bre++;
        }

        cout<<len*bre<<endl;
        
    // }
    
    return 0;
}

// 5 1
// WWWBB