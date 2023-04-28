#include <bits/stdc++.h>
using namespace std;


map<int,int> mai,rfg;

vector<int> mo;


int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;cin>>n;
    mai=rfg;
    mo.clear();

    int ans=0,z=0;
    int arr[n+1];

    for (int i = 1; i <=n; i++)
    {
      /* code */
      cin>>arr[i];
    }

    for (int i = 1; i <=n; i++)
    {
      /* code */
      for (int j = 2; j <=sqrt(arr[i]); j++)
      {
        /* code */
        if(!mai[j]&& arr[i]%j==0){
          mo.push_back(j);
        }

        while(arr[i]%j==0){
          mai[j]++;
          arr[i]/=j;
        }

      }

      if(arr[i]!=1){
        if(!mai[arr[i]]){
          mo.push_back(arr[i]);
        }
        mai[arr[i]]++;
      }
      
    }


    for(int i=0;i<mo.size();i++) {
      ans+=mai[mo[i]]%2;
      z+=mai[mo[i]]/2;
    }

    cout<<ans/3+z<<endl;
    
        
    
  }
  return 0;
}