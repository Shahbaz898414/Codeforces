#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    // ll t, n, i, j;
    // cin>>t;
    
    // while(t-->0){

      string s;cin>>s;

      ll len = s.size();

      ll n;cin>>n;

      set<char> s1;

      
      if(len<n){
        cout<<"impossible"<<endl;
      }else{

        for (int i = 0; i<len; i++) {
          
          s1.insert(s[i]);

        }

        int size2=s1.size();
		if(size2>=n)cout<<"0";
		else{
			cout<<n-size2;
		}

       
       
        
      // }
      
    }
    
    return 0;
}


