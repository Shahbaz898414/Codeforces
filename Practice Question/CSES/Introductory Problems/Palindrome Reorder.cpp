#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;

int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  string s;
  cin >> s;

  char a[1000000],d;

  map<char, int> ma;
  ll c=0,e=0;

  for (int i = 0; i < s.size(); i++) {

    ma[s[i]]++;
  }

  map<char, int>::iterator it;

  for(it = ma.begin();it!=ma.end();it++){

    if(it->second==1){
      c++;
    }else{
      if(it->second%2!=0){
        cout<<"NO SOLUTION"<<endl;
        return 0;
      }
    }
  }

  if(c==1){

    for(it = ma.begin();it!=ma.end();it++){
    if(it->second!=1){
      for (int i = 1; i<=(it->second)/2; i++) {
          a[e]=it->first;
          e++;

      }
    }else{
      d=it->first;
    }
   }
   e--;

    for (int i = 0; i <=e; i++) {
      
      cout<<a[i];
    }

    cout<<d;
    for (int i = e; i >=0; i--) { 
      cout<<a[i];
    }


  }else if(c==0){

    for(it = ma.begin();it!=ma.end();it++){
      for (int i = 1; i<=(it->second)/2; i++) {
          a[e]=it->first;
          e++;

      }
    }
    e--;

    for (int i = 0; i <=e; i++) {
      
      cout<<a[i];
    }
    for (int i = e; i >=0; i--) { 
      cout<<a[i];
    }
    
    
    
  }else{
    cout<<"NO SOLUTION"<<endl;
  }


  return 0;
}
