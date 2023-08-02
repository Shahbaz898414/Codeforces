#include <iostream>
#include <vector>
#include <string>
using namespace std;


vector<int>  prefix1(string s){
    int n=s.size();
    vector<int> pi(n,0);
    for (int i = 1; i <n; i++)
    {
        /* code */
        int j=pi[i-1];

        while(j>0 and s[i]!=s[j]){
            j=pi[j-1];
        }

        if(s[i]==s[j]) j++;

        pi[i]=j;
    }

    return pi;
}





int main() {
   string pat="sh";

   vector<int> prefix=prefix1(pat);
   string txt="shnknfncshcmclshnuxshnnmcsh";

    int pos=-1;
    int i(0);
    int j(0);
    vector<int>  v;
    while(i<txt.size()){
        if(txt[i]==pat[j]){
            j++;
            i++;
        }else{
            if(j!=0){
                j=prefix[j-1];
            }else i++;
        }
        if(j==pat.size()){
             pos=i-pat.size();
            v.push_back(pos+1);
           
            // break;
        }
    }





   for(auto it:v) {
    cout<<it<<" ";
   }

//    cout<<endl;



    return 0;
}
