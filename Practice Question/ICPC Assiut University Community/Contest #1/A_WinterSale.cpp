#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
  
    float x,p;
    cin>>x>>p;
    float g=x/100;
    float c=p/(1-g);
    cout<<fixed<<setprecision(2);
    cout<<c<<endl;
  
  return 0;
}