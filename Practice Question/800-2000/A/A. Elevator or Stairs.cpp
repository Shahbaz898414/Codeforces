#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll x,y,z,t1,t2,t3;
    cin>>x>>y>>z>>t1>>t2>>t3;

    ll d=abs(x-y),e=abs(x-z);
    ll etime=e*t2+t3+t3+t3;
    ll stair=d*t1 ,ele=d*t2+etime;

    // cout<<stair<<" "<<ele<<endl;

    if(stair>=ele){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }



    return 0;
    
}


