#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() { 
  string s;cin>>s;
  set<int> se;
  for(int i=0;i<s.size();i++) 
  se.insert(s[i]);
  if(se.size()%2==0)
  cout<<"CHAT WITH HER!";
  else 
  cout<<"IGNORE HIM!";
  
  return 0;
}
