#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

	int t,c=0,v=1;cin>>t;
  int a[t];

  for (int i = 0; i < t; i++)
  {
    /* code */
    cin>>a[i];
  }
  

  for(int i = 0; i<t,v<t+1; i++,v++) {
    if(a[i]!=a[v]) { 
      c++;
    }
  }

  cout<<c<<endl;
   
}
