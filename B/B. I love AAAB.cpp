#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;cin>>t;

    while(t-->0) {

        string s;cin>>s;

        ll d=s.size(),a=0,b=0;

        bool fl=true;

        for (int i = 0; i <d; i++)
        {
            if(s[i]=='B'){
                if(a==0){
                    fl=false;
                    break;
                }else{
                    a--;
                }
            }else{
                a++;
            }
        }

        if(fl and s[d-1]=='B'){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        

        
    }

}


