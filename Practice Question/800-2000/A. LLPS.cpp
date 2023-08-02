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

10 kg aata
5 package teil
1 package saraf axial
1kg tuvar ki dal
1kg chane ki dal
1kg chana
1/2kg vatana
1kg namak
2 package chura
2 package good day
1 wheem bar soap

1/2kg lala masur
1/2kg urad ki daal


*/
