#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    int a[100000];
    cin>>t;
    while(t-->0) {
        int d=0,rem=0;
        cin>>n;
        if(n >= 1000){
            rem=n%1000;
            a[d++]=n-rem;
            n%=1000;
        }
        if(n >= 100){
            rem=n%100;
            a[d++]=n-rem;
            n%=100;
        }
        if(n >= 10){
            rem=n%10;
            a[d++]=n-rem;
            n%=10;
        }
        if(n<10 && n>0){
            a[d++]=n;
        }
        vector<int>va;
        for(int i=0; i<d; i++){
            va.push_back(a[i]);
        }
        cout<<va.size()<<endl;
        for(int i=0; i<va.size(); i++){
            cout<<va[i]<<" ";
        }
        cout<<endl;
    }
}