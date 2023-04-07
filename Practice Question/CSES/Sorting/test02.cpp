#include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define endl "\n"
#define M 1000000007
#define boost
#define debug1(x) cout<<#x<<" "<<x<<endl;
#define debug2(x,y) cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<endl;
#define debug3(x,y,z) cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<endl;
template<class _T>inline void read(_T &_a)
{
    bool f=0; char _c=getchar(); _a=0;
    while(_c<'0'||_c>'9'){ if(_c=='-') f=1; _c=getchar(); }
    while(_c>='0'&&_c<='9'){ _a=(_a<<3)+(_a<<1)-'0'+_c; _c=getchar(); }
    if(f) _a=-_a;
}
 
ll T;
 
int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,k;
    read(n);
    read(k);
    vector<int> v;
    for(int i=0;i<n;i++)
        v.push_back(i+1);
    
    int i=0;
    int cnt = n;
    while(v.size()!=0) {
        i= (i+k)%cnt;
        cout<<*(i+v.begin())<<" ";
        v.erase(i+v.begin());
        cnt--;
 
    }
    cout<<endl;
 
return 0;
}