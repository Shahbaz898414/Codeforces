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

    int t;cin>>t;

    while(t--) {
      int n;cin>>n;

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
*/