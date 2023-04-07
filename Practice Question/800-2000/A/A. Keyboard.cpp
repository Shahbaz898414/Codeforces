
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  string s2;
  char c;

  cin>>c>>s2;

    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    string answer;
    int len=s2.length();
    for(int i=0;i<len;i++){
      int index=s.find(s2[i]);
      if(c=='R'){
        answer+=s[index-1];
      
      }
      else{
          answer+=s[index+1];
      }
      
    }
      
    cout<<answer<<endl;




  
  
  return 0;
}