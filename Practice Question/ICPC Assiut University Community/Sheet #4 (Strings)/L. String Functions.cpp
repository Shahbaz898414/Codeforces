#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,q;
  cin>>n>>q;
  string s ,qu;
  cin>>s;
  int start,end;
  while(q--){
    cin>>qu;
    if(qu =="pop_back"){
      s.pop_back();
    }else if(qu=="front"){
      cout<<s.front()<<endl;
    }else if(qu=="back"){
      cout<<s.back()<<endl;
    }else if(qu=="sort"){
      cin>>start>>end;
      sort(s.begin()+min(start,end)-1,s.begin()+max(start,end));
    }else if(qu=="reverse"){
      cin>>start>>end;
      reverse(s.begin()+ min(start,end)-1,s.begin()+ max(start,end));
    }
    else if(qu=="print"){
      int pos;cin>>pos;
      cout<<s[pos - 1]<<endl;
    }
    else if(qu=="substr"){
       cin>>start>>end;
       for(int i=min(start,end)-1;i<max(start,end)-1;i++){
         cout<<s[i];
       }
       cout<<endl;
    }else{
      char c;
      cin>>c;
      s.push_back(c);
    }
  }
  return 0;
}