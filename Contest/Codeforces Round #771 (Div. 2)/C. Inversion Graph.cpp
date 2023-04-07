#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t,n,i,a;
    cin>>t;
    while(t--) {
        
        cin>>n;
        int a[n];
        for (int i = 0; i <n; i++) {
          cin>>a[i];
        }
        set<int> s;
        s.insert(0);

        for (int i = 1; i <=n; i++) {
          s.insert(-1*i);
        }

        int ans=0,last=n,target=n,maxa=n;

        for (int i = n-1; i>=0; i--) {
          s.erase(-1*a[i]);
          if(a[i]==target){
            int k=(-1)*(*s.begin());
            if(k==(maxa-(last-i))){
              ans++,target=k,maxa=k,last=i;
            }else{
              target=k;
            }
          }
        }
        cout<<ans<<endl;
     
    }
    return 0;
}

