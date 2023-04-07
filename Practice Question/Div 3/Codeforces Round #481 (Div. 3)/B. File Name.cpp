#include<bits/stdc++.h>
using namespace std;

int main() {

  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n,m=0;
  cin>>n;

  string s;cin>>s;

  for (int i = 0; i <n; i++)
  {
    if(s[i]=='x'){
      m++;
    }
  }

  if(m==n){
    cout<<n-2<<endl;


  }else{

    int on=0,se=0,th=0;

    for (int i = 0; i <n; i++)
    {
      if(s[i]=='x'){
        on++;
      }else{
        on=0;
      }

      if(on>=3){
        se++;
      }
    }

    cout<<se<<endl;

  }
  return 0;
}