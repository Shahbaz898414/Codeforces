#include <iostream>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;


int ans;
int t,n;
int main()
{
	cin>>t;
	while(t--)
	{
		ans=0;
		cin>>n;
		int y1=0,y2=0;
		for(int i=n;i>=1;i--)
		{
			while(i*i+y1*y1<n*n)y1++;
			while(i*i+y2*y2<(n+1)*(n+1))y2++;
			ans+=(y2-y1);
		}
		cout<<ans*4<<endl;
	}
}