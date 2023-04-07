// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;


// Driver Code
int main() {

  int t;cin>>t;
  while(t--){


  int n;cin>>n;
  int ans=n;
	string S;cin>>S;
  

  for (int i = 0; i < n; i++)
  {
    if(S[i]==S[i-1]){
      ans--;
    }
  }

  cout<<ans<<endl;
	
  }

	return 0;
}
