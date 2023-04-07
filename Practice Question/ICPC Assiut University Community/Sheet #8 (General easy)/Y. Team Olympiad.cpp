#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n,i,t1[5000],t2[5000],t3[5000],x=0,y=0,z=0,w,s;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==1){
            t1[x]=i+1;
            x++;
        }
        else if(a[i]==2){
            t2[y]=i+1;
            y++;
        }
        else if(a[i]==3){
            t3[z]=i+1;
            z++;
        }
    }
    s=min(x,y);
    w=min(s,z);
    cout<<w<<endl;
    for(x=0,y=0,z=0;x<w,y<w,z<w;x++,y++,z++){
        cout<<t1[x]<<" "<<t2[y]<<" "<<t3[z]<<endl;
    }

    return 0;
}