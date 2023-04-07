// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check whether
// the string is palindrome
string isPalindrome(string S,int n) {
	// Stores the reverse of the
	// string S
	string P = S;

	// Reverse the string P
	reverse(P.begin(), P.end());

	// If S is equal to P
	if (S == P) {
		// Return "Yes"
		cout<<1<<endl;
	}
	// Otherwise
	else {
		// return "No"
		cout<<n-1<<endl;
	}
}

// Driver Code
int main() {

  int t;cin>>t;
  while(t--){


  int n;cin>>n;
	string S;cin>>S;
  string d=S;
  set<string> s1;

  for (int i = 0; i <=n; i++) {
    S.erase(i);
    s1.insert(S);
    d=S;
  }

  cout<<s1.size()<<endl;


  
	
  }

	return 0;
}
