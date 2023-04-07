#include<bits/stdc++.h>
using namespace std;
int main () {

	string s;
	cin>>s;
  int url=s.size();
  for(int i=0;i<url;i++){
    if(s[i]=='?'){
      i++;
      for(int z=i;z<url;z++){
        if(s[z]=='=') {
          cout<<": ";
          continue;
        }
        if(s[z]=='&') {
          cout<<endl;
          continue;
        }
        cout<<s[z];
      }
      break;
    }
  }
}