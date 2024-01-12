#include <iostream>
#include <string>
#include <map>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n,k;
    cin >> n>>k;
    vector<int> v1,v2;

    for (int i = 0; i < n-k; i++)
    {
      /* code */
      v1.push_back(i+1);
    }

    for (int i = n; i >n-k; i--)
    {
      /* code */
      v2.push_back(i);
    }

    if(k==0){
      for (int i = n; i >=1; i--)
      {
        /* code */
        cout<<i<<" ";
      }

      cout<<endl;
      continue;
      
    }else if(k==n-1){
      for (int i = 1; i <=n; i++)
      {
        /* code */
        cout<<i<<" ";
      }
      cout<<endl;

      continue;
  
    }

    int i=0,j=0;
    int cnt=0;

    while(i<=v2.size() and j<=v1.size()){
      if(cnt%2==0)  {
        cout<<v2[i]<<" ";
        i++;
      }else{
        cout<<v1[j]<<" ";
        j++;
      }
      cnt++;
    }


    while(j<=v1.size())
    cout<<v1[j]<<" ",j++;

    while(i<=v2.size()){
      cout<<v2[i]<<" ";

      i++;
    }



cout<<endl;

    for(auto it:v1){
      cout<<it<<" ";
    }

    cout<<endl;
    for(auto it:v2){
      cout<<it<<" ";
    }

    
    
    
  }

  return 0;
}


