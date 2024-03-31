#include <bits/stdc++.h>
using namespace std;
int n,i,a[100005];
main () {
    for(cin>>n;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(cin>>i;cin>>i;cout<<upper_bound(a,a+n,i)-a<<endl);
}
