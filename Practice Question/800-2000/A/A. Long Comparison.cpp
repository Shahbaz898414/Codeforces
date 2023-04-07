#include <bits/stdc++.h>
#define ll long long
using namespace std;
int t;
int main()
{
	cin >> t;
	while (t--)
	{
		int p, q, r, s;
		cin >> p >> q >> r >> s;

		// ll x=pow(10,q);
		// ll y=pow(10,s);

		// p=p*x;
		// r=r*y;

		// cout<<x<< " "<<y<<endl;

		// cout<<p<<" "<<r<<endl;

		// cout<<p<<" "<<r<<" "<<x<< " "<<y<<endl;

		// if(p>r and r<p){
		// 	cout<<">"<<endl;
		// }else if(p==r){
		// 	cout<<"="<<endl;
		// }else{
		// 	cout<<"<"<<endl;
		// }

		double x = log10(1.0 * p / r) + q - s;
		if (x == 0)
			printf("=");
		else
			printf(x > 0 ? ">" : "<");
		printf("\n");
	}
	return 0;
}