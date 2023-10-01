#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[55],b[55];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,k;
        scanf("%d%d%d",&n,&m,&k);
        ll ans=0;
        for(int i=1;i<=n;i++)scanf("%d",a+i),ans+=a[i];
        for(int i=1;i<=m;i++)scanf("%d",b+i);

        // for (int i = 1; i <=n; i++)
        // {
        //     /* code */
        //     cout<<a[i]<<" ";
        // }

        // cout<<endl;


        //  for (int i = 1; i <=m; i++)
        // {
        //     /* code */
        //     cout<<b[i]<<" ";
        // }

        // cout<<endl;
        
        sort(a+1,a+1+n);
        sort(b+1,b+1+m);
        if(a[1]<b[m])ans+=b[m]-a[1];
        if(k%2==0)ans=ans-max(a[n],b[m])+min(a[1],b[1]);
        printf("%lld\n",ans);
    }
}