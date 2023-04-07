#include<bits/stdc++.h>
#define ll long long int
using namespace std;

struct item {

  int value;
  int weight;
};

bool comp(item i1,item i2){
  double unit1=(i1.value*1.0)/(i1.weight);
  double unit2= (i2.value*1.0)/(i2.weight);

  return (unit1>unit2);
}

class Solution {
  public:
  double fracKna(item arr[],int n,int w){
    sort(arr,arr+n,comp);
    double ans=0;
    for (int i = 0; i < n; i++) {
      
      if(arr[i].weight>=w) {
        double unit= (arr[i].value*1.0)/(arr[i].weight);
        ans+=(w*unit);
        break;
      }

      ans+=arr[i].value;
      w-=arr[i].weight;
    }

    return ans;
    
  }
};


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;
    cout<<setprecision(2)<<endl;
    while(t-->0){
      int n,w;cin>>n>>w;

      item arr[n];

      for (int i = 0; i < n; i++) {
        
        cin>>arr[i].value>>arr[i].weight;
      }

      Solution ob;

      cout<<ob.fracKna(arr,n,w)<<endl;
      
    }

    return 0;
    
}


