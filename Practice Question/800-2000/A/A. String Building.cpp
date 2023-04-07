#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 

int main() {
int t;
	cin>>t;
	while(t--) {
		  string s;cin>>s;
      bool fl=1;
        for (int i = 0; i <s.size(); i++) {

          int cnt=1;
          while(s[i]==s[i+1] and i+1<s.size()) {
            cnt++;i++;
          }
          // cout<<cnt<<endl;

          if(cnt<2){
            fl=0;
            break;
          }
          
        }
          if(!fl){
            cout<<"NO"<<endl;
          }else{
            cout<<"YES"<<endl;
          }

	}
	return 0;
}