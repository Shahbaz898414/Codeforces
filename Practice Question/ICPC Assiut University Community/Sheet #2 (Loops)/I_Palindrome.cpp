#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int copy = n,count=1;
    while (copy != 0) {
     copy = copy / 10;
   
     count=count*10;
    
    }
    count=count/10;
   
    copy = n;
   
    int ans = 0;
    while (n != 0) {
         ans += (n % 10) *count;
         count /= 10;
         n = n/10;
    }
    cout<<(ans)<<endl;
    if (ans == copy) 
    cout<<("YES");
    else cout<<("NO");
	return 0;
}
