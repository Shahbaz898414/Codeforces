#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int t;
    cin >> t;
    forn(tt, t) {
       int n;
        cin >> n;
        int a[n+1], i;
        for(i = 0; i< n; i++) cin >> a[i];
        int x = 0;
        i = 0;
        if(n%2!=0){
            x = a[0];
            i = 1;
        }
 
        bool no = false;
        for(; i <n; i+=2) {
            if(a[i] >= x && a[i+1] >= x){
                x = max(a[i], a[i+1]);
            }
            else{
                no = true;
            }
          
        }
        if(no) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}

