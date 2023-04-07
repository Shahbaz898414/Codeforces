#include<bits/stdc++.h>
using namespace std;

int main() {
  
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int d=s.size();

    for(int i=0;i<d;i++){
       char cha =s[i];
       int c=1;
       while(s[i]==s[++i]){
         c++;
       }
       i--;
       cout<<cha<<" : "<<c<<endl;
    }
  return 0;
}