#include <bits/stdc++.h>
#define ll long long int
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int t;
    cin >> t;
    forn(tt, t) {
        string s;
        cin >> s;
        int n = s.length();

        ll one=0,zero=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='1'){
                one=i+1;
            }
        }
        for(ll i=0;i<n;i++){
            if(s[i]=='0'){
                zero=i+1;
                break;
            }
        }
        if(one==0 && zero==0){
            cout<<n<<endl;
        }
        else if(one==0){
            cout<<zero<<endl;
        }
        else if(zero==0){
            cout<<n-one+1<<endl;
        }
        else{
            cout<<abs(one-zero)+1<<endl;
        }
            
        }
}

/*
1 
1 
0 0 1 1 0 0 0 
1 1 1 1 1 
0 0 1 1 1 1 0 0 
1 0 0 0 0 0 
0 0 0 1 
1 1 1 0 0
*/

/*
1 0 a
1 1 b

1 1 a
1 0 b

1 1 1 1 0 0 0 0 a
1 1 1 1 1 0 0 0 b

1 1 1 1 1 1 a
1 1 1 1 1 1 b

1 1 1 1 1 1 0 0 0 a
1 1 1 1 1 1 0 0 0 b

1 0 0 0 0 0 0 a
1 1 1 1 1 1 1 b

1 1 1 1 1 a
1 0 0 0 0 b

1 1 1 0 0 0 a
1 1 1 1 1 1 b
 */