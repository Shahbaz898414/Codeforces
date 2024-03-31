#include<iostream>
using namespace std;
int t,n,a[200003];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;++i)cin>>a[i];
		int x=a[n],z=0;
		for(int i=n-1;i>=1;--i){
			if(a[i]>x)x=a[i],++z;
		}
		cout<<z<<endl;
	}
}