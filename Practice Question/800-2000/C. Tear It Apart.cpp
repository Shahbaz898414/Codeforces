#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {

    // cout<<(int)log2(5)+1<<endl;
    		string s;
    		cin>>s;
    		int ans=1e9;
    		for (char i='a';i<='z';i++)
    		{
    			int cnt=0,l=0;
    			for (int j=0;j<s.size();j++)
    			{
    				if (s[j]==i)
    				{
    				    	// cout<<"in loop "<<((int)log2(l)+1)<<" ";
    					cnt=max(cnt,(int)log2(l)+1);
    					l=0;
    				}
    				else
    				{
    					l++;
    				}
    			}
    			// cout<<endl;
    			// cout<<"out loop "<<((int)log2(l)+1)<<endl;
    			cnt=max(cnt,(int)log2(l)+1);
    			ans=min(ans,cnt);
    		}
    		// cout<<"main ans"<<ans<<endl;
    		cout<<ans<<endl;
  }
}