#include<bits/stdc++.h>
using namespace std;
#define pf printf
#define sf scanf
#define ll long long int

int  main() {

  set<int> s;
  set<int> :: iterator it ;
  int i,n , k;
  cin>>n>>k;
  int a[n];
  for(i=0;i<n;i++) {
        cin>>a[i];
        if(s.size()!=k)
        s.insert(a[i]);
  }

      if(s.size()==k){
           cout<<"YES"<<endl;
            for(it=s.begin();it!=s.end();it++) {
                  for(i=0;i<n;i++) {
                      if(a[i]== (*it) ) { 
                        pf("%d ",i+1); 
                        break;
                      }
                    }
              }
      }
      else {
           cout<<"NO"<<endl;
      }

return 0;
}