#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main() {
    int t;
    cin>>t;
    
    while(t--){
        string s;cin>>s;

        ll len=s.size(); 

        int ans=n;


        for (char i = 'a'; i <='z'; i++)
        {
          /* code */
          int l=0,r=0;

          for (int j = 0; j <n; j++)
          {
            /* code */
            if(s[j]==i){
              r=max(res,l);
              l=0;
            }else{
              l++;
            }
          }
          
        }
        


          
    }
}