#include <bits/stdc++.h>
using namespace std;
 
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define l "\n"
#define int long long
 
const int N = 3e5 + 5;

int32_t main() {
	IO;
	int t;
	cin >> t;
	
	while(t--) {
     int n;
    string s;
    cin>>n;
    if(n<=1399){
      cout<<"Division 4"<<endl;
    }else if(n>=1400 and n<=1599){
      cout<<"Division 3"<<endl;
    }else if(n>=1600 and n<=1899){
      cout<<"Division 2"<<endl;
    }else {
      cout<<"Division 1"<<endl;
    }

	}
	return 0;
}

