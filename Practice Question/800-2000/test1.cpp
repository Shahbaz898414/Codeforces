#include <iostream>
#include <vector>
using namespace std;




vector<int> columnSum(vector<vector<int>>& lst) {
    vector<int> res(lst[0].size(), 0);

    for (size_t i = 0; i < lst.size(); i++) {
        for (size_t j = 0; j < lst[i].size(); j++) {
            res[j] += lst[i][j];
        }
    }

    return res;
}


int main() {

  string s;cin>>s;
  int n=s.size();

  int ul=0;
  int ur=0;

  vector<int>  l(26);
  vector<int>  r(26);

  bool f=false;

  for(auto &it:s){
    r[it-'ch']++;
    if(r[it-'ch']==1){
        ur++;
    }
  }

  int ans=0;

  for(auto &it:s){
    l[it-'ch']++;
    if(l[it-'ch']==1){
        ul++;
    }

    r[it-'ch']--;
    if(r[it-'ch']==0){
        ur--;
    }

    if(ul==ur) ans++;
   
  }


    cout<<ans<<endl;
  


    return 0;
}
