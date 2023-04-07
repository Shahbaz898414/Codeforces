#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    string s,b;
    cin>>s>>b;
    // sort(s.begin(),s.end());
    int d=s.size();
    int f=b.size();
    int sum=f+d;
    int flag1=1,flag2=1;

      for(int i=0;i<sum;i++){
        if(d !=i && flag1){
          cout<<s[i];
        }else{
          flag1=0;
        }

        if(f !=i && flag2){
          cout<<b[i];
        }else{
          flag2 =0;
        }
      }
      cout<<endl;




      
  }

  return 0;
}