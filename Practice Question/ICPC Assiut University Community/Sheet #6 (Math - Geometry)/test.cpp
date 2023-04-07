#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin >> n;
    ll res=1,c=0;
    for (ll i = 1; i <=n; i++)
    {
     res*=i;   
    }

    while(res>0){
        res/=10;
        cout<<res<<endl;
        c++;
    }
   	cout<<"Number of digits of "<<n<<"! is "<<c<<endl;

    
    return 0;
}
