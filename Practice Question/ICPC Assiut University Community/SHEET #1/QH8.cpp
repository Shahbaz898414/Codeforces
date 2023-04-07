#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  float t,c,f;

//  if(n>m){
    f=floor((float)n/m);
    c=ceil((float)n/m);
    t=round((float)n/m);
  // }
    
 
 
 cout<<"floor "<<n<<" / "<<m<<" = "<<f<<endl;
 cout<<"ceil "<<n<<" / "<<m<<" = "<<c<<endl;
 cout<<"round "<<n<<" / "<<m<<" = "<<t<<endl;

  return 0;
}

