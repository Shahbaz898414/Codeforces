#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
ll xAxes[1000];
ll yAxes[1000];
ll x,y,nq,points;
	cin>>x>>y>>nq>>points;
	for(int i=0;i<points;i++) {
		cin>>xAxes[i]>>yAxes[i];
	}
	
	for(int i=0;i<points;i++){
	ll x1 = x-xAxes[i];
	ll y1 = y-yAxes[i];
		double result = sqrt(pow(x1,2) + pow(y1,2));
		if(result > nq){
			cout<<"NO"<<endl;
		} else {
			cout<<"YES"<<endl;
		}
	}
}


