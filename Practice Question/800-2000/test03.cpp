#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;cin>>n;

    vector<int> v(n),odd,even,ans;
    for (int i = 0; i < n; i++)
    {
      /* code */
      cin>>v[i];
    }

    // map<int,int>odd,even;

    for (int i = 0; i <n; i++)
    {
      // p.push_back({v[i],i});
      if(v[i]%2==0){
        even.push_back(i+1);

      }else{
       odd.push_back(i+1);
      }
    }

    if(odd.size()==0){
      cout<<"NO"<<endl;

      continue;
    }

    for(auto it:odd){
      ans.push_back(it);
    }

    if(ans.size()<3){
      int k=3-ans.size();

      if(k==1){
        cout<<"NO"<<endl;
        continue;
      }

      for (int i = 0; i <k; i++)
      {
        ans.push_back(even[i]);
      }
      
    }

    cout<<"YES"<<endl;    

    // if(cnt==1) cout<<"NO"<<endl;
    // else {
      for(auto it:ans){
        cout<<it<<" ";
      }
    // }
    

    cout<<endl;
    
  }
  return 0;
}