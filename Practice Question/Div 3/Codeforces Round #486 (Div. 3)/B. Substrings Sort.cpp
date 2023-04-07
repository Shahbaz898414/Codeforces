#include<bits/stdc++.h>
#define ll long long int
using namespace std;


bool com(string x, string y) {
    return x.length()<y.length();
}

int main() {

    ll n;

    string st[100];
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>st[i];
    }

    sort(st,st+n,com);

    for(int i=0; i<n-1; i++) {
        if(st[i+1].find(st[i])==string::npos) {
            cout << "NO";
            return 0;
        }
    }

    cout<<"YES"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<st[i]<<endl;
    }

    

    return 0;
}