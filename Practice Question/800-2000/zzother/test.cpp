#include<bits/stdc++.h>
#define ll long long int
using namespace std;

string toBinary(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}
 
int main () { 
    ll ans=(1<<30)-1;

    cout<<toBinary(ans)<<endl;
     ans&=2;
    cout<<ans<<endl;
 	return 0;
  
}