#include <iostream>
#include <vector>
#include <string>

using namespace std;



vector<int>  prefix(string s){
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
   
    return 0;
}
