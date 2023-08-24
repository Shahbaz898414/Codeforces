#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {

  // ll t;cin>>t;
  // while(t--) {
     
    ll n;cin>>n;
    char arr[n][n];

      for (ll i = 0; i < n; i++)
        for (ll j = 0; j < n; j++) 
          cin>>arr[i][j];
        
      
      

  // }

}


/*


#include<bits/stdc++.h>
using namespace std;
int n;
string s1,S,k;
main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cin>>k;
	s1+=k;
	}
S=s1;
reverse(S.begin(),S.end());
	if(S==s1)
	cout<<"YES";
	else cout<<"NO";
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s1,s2,s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		s1+=s;
	}
	s2=s1;
	reverse(s2.begin(),s2.end());
	if(s2==s1)
	{
		cout<<"YEm";
	}
	else cout<<"NO";
}


*/