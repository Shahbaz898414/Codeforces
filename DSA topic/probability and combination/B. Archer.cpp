
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

    long double a,b,c,d;cin>>a>>b>>c>>d; 

    cout<<setprecision(12)<<fixed;


    cout<<(a/b)/(1-(1-a/b)*(1-c/d))<<endl;

  return 0;
}