#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void printFibonacciNumbers(ll a[],ll n) {
	int f1 = 0, f2 = 1, i;

	if (n < 1)
		return;
	a[0]=f1;
      a[1]=f2;
      a[2]=f2;
	for (i = 1; i < n; i++) {
		cout << f2 << " ";
		int next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
}

int main()
{
	
      int t;cin>>t;

      while(t--){

            ll arr[11]={2,3,5,13,89,233,1597,28657,514229,433494437,2971215073};

            ll n;cin>>n;

            ll a[50];

            printFibonacciNumbers(a,n);
            
      }
	return 0;
}

