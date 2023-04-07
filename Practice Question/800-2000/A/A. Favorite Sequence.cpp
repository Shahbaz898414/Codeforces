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
    ll t;cin>>t;

    while(t-->0){
        ll n;cin>>n;

        ll a[n];

        for (int i = 0; i <n; i++) {
          cin>>a[i];
        }

        ll l=0,r=n-1;

        if(n%2==0){
          while(l<r){
            cout<<a[l]<<" "<<a[r]<<" ";
            l++;r--;
          }

          cout<<endl;

        }else{
           while(l<r){
            cout<<a[l]<<" "<<a[r]<<" ";
            l++;r--;
          }

          cout<<a[(n)/2]<<endl;

        }

    }
    

    return 0;
}


/*
3 1 4 1 5 9 2 
9 1 2 7 
8 2 4 4 3 9 1 7 2 8 7 
42 
11 7 
1 1 1 1 1 1 1 1 

*/