#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n,k, l, c, d, p, nl, np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 
  int bottle=k*l;
  int slices=c*d;
  int salt=p/np;
  int make=bottle/nl;
 
  int min1=min(make,salt);
  int min2=min(min1,slices);

  cout<<min2/n<<endl;
 
  return 0;
}