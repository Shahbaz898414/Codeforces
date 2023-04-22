#include <bits/stdc++.h>
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

    for(int i=1;i<N;++i)	a[i]=i*(3*i+1)/2;
    int t;cin>>t;
    while(t--) {
      int n,cnt=0;cin>>n;

      for(int i=N-1;i;--i)	while(n>=a[i])	n-=a[i],++cnt;

      cout<<cnt<<endl;

    }
    return 0;
}



/*

#include<cstdio>
const int N=2e4+4;
int a[N],n,t,s;
int main(){
	for(int i=1;i<N;++i)	a[i]=i*(3*i+1)/2;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);s=0;
		for(int i=N-1;i;--i)	while(n>=a[i])	n-=a[i],++s;
		printf("%d\n",s);
	}
	return 0;
}



long long int t,n,m,k; cin>>t;
while(t--){
      cin>>n; m=0;
     while(n>1) {
          k=2;
        while(n>=k) {
          n=n-k; k=k+3;
        }
        m++;
     }
      cout<<m<<endl;
}



*/