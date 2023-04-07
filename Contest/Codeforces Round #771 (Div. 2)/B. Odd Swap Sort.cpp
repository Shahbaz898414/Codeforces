#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t,n,i,a;
    cin>>t;
    while(t--) {
        vector<int>odd,even,ve,vo;
        cin>>n;
        for(i=0; i<n; i++) {
            cin>>a;
            if(a%2==0) {
                even.push_back(a);
                ve.push_back(a);
            }else {
                odd.push_back(a);
                vo.push_back(a);
            }
        }
        sort(ve.begin(),ve.end());
        sort(vo.begin(),vo.end());

        if((odd==vo)&&(even==ve))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}