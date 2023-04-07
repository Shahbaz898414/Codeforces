#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cin >> n;
    ll b[n];


    for (int i = 1; i <= n; ++i) {
       
        if(i == 1) {
            b[i]=t1;
            continue;
        }
        if(i == 2) {
           b[i]=t2;
           continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        b[i]=nextTerm;
    }

    cout<<b[n];
    return 0;
}