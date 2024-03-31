#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define l "\n"
#define int long long
const int N = 3e5 + 5;

int32_t main() {
	IO;
	int t;
	cin >> t;
	while(t--) {
   string s;cin>>s;
    int zero=count(s.begin(),s.end(),'0');
    int one=count(s.begin(),s.end(),'1');
    if(zero==0) {
      cout<<0<<endl;
      continue;
    }  

    int first = s.find('0');
    int last = s.rfind('0');
    if(last-first+1==zero){
      cout<<1<<endl;
    }else{
      cout<<2<<endl;
    }
	}
	return 0;
}

/*
   string s;
    ll c=0;
    cin>>s;
    int l=s.length();
    char ch=s[0];
    fl(int i=0;i<l;i++)
    {
        if(i==0)continue;
        if(s[i]!=ch)
        {
            if(ch=='0')c++;
            ch=s[i];
        }
        if(c>1)
        {
            c=2;
            break;
        }
    }
    if(c<2) {
        if(ch=='0')c++;
    }
    cout<<c<<"\n";
*/