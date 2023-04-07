#include<bits/stdc++.h>
using namespace std;

int main() {

  string s,n;
  cin>>s>>n;

  
  

  int g=s.size(),f=n.size();
  cout<< g<<" "<<f<<endl;
  string h=s+n;

  cout<<h<<endl;
  char b=s[0],c=n[0];

  s[0]=c;
  n[0]=b;

  cout<<s<<" "<<n<<endl;
 
  return 0;
}