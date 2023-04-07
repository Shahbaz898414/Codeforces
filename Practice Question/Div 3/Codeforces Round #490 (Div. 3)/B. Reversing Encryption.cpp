#include<bits/stdc++.h>
#define ll long long int
using namespace std;
   
int main() {
    
    int n;cin>>n;
    string s;cin>>s;
   
    set<int> set;
    
    for (int i = 1; i <=n; i++) {
      if(n%i==0){
        set.insert(i);
      }
    }
    
    auto it=set.begin();
   
    while(it !=set.end()){
   
      reverse(s.begin(),s.begin()+*it);
      ++it;
    }
    cout<<s<<endl;
    return 0;
}  
   
    