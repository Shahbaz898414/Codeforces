#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;cin>>s;

  ll len=s.size();

  sort(s.begin(),s.end(),greater<int>());
  int i=0;
  
  while(s[0]==s[i])
  {
    i++;
  }

  for(int j=0;j<i;j++)
  cout<<s[0];

}


/*


*/
