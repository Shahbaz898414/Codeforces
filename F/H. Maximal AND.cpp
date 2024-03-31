#include<iostream>
using namespace std;
long long t,k,n,m,a[200002],i,j,b,c;
int main()
{
	cin>>t;
	for(k=1;k<=t;k=k+1)
	{
		cin>>n>>m;c=0;
		for(i=1;i<=n;i=i+1)cin>>a[i];
		for(i=30;i>=0;i=i-1)
		{
			b=0;
			for(j=1;j<=n;j=j+1)
			if((a[j]&(1<<i))==0)b=b+1;
			if(b<=m)
			{
				m=m-b;
				c=c+(1<<i);
			}
		}
		cout<<c<<endl;
	}
	return 0;
}