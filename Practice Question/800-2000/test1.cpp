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

/*


class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>h;
        for(int i = 0; i < arr.size(); i++) h[arr[i]]++;
        priority_queue<int> pq;
        for(auto it: h) pq.push(it.second);
        int ans = 0, minus = 0;
        while(!pq.empty())
        {
            ans++;
            minus += pq.top();
            pq.pop();
            if(minus >= (arr.size()/2)) break;
        }
        return ans;
    }
};

*/
