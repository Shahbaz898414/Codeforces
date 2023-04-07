#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {

    string s;
    cin>>s;

    for(int i=0;i<5;i++) {
       string x; cin>>x;
        if(x[0]==s[0] || x[1]==s[1]) {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;

    return 0;
}