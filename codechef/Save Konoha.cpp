#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b) for (int i = a; i < b; i++)
#define fe(i, a, b) for (int i = a; i <= b; i++)
#define fr(i, a, b) for (int i = a; i >= b; i--)

void sort(vector<ll>& a) {
    sort(a.begin(), a.end());
}

const int N=2e4+4;

int a[N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   
    int t;cin>>t;
    while(t--) {
      int n,cnt=0,z;cin>>n>>z;
      int arr[n];

      priority_queue<int> pq;

      for(int i=0;i<n;i++){
        cin>>arr[i];

        pq.push_back(arr[i]);
      } 

      // for(auto it:pq){

      //   cout<<it<<" ";
      // }

      // cout<<endl;

      // sort(arr,arr+n);

      // reverse(arr,arr+n);

      // for(int i=0;i<n;i++) {
      //   cout<<arr[i]<<" ";
      // }

      // cout<<endl;

    }
    return 0;
}



