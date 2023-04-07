#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ll n;cin>>n;
  char m,o;
  string s;
  cin>>s;

  int e=1,d=2,f=0,r=0;

  for(int i=0;i<n;i++){
      f=0;
		for(int z=0;z<n;z++) {
			if((s[i]==s[z]) && (s[i+1]==s[z+1])){
				f++;
				if(f>r){
					r=f;
					m=s[i];
					o=s[i+1];
				}
			}
		}
    
  }

 cout<<m<<o;

  return 0;
}