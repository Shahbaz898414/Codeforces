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

    for(int i=1;i<N;++i) a[i]=i*(3*i+1)/2;
    int t;cin>>t;
    while(t--) {
      int n,cnt=0;cin>>n;
      for(int i=N-1;i;--i)
      	while(n>=a[i])
        	 n-=a[i],++cnt;


      cout<<cnt<<endl;

    }
    return 0;
}



