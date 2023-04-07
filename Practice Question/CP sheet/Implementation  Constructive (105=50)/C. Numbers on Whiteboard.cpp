#include<bits/stdc++.h>	
#define ll long long int
using namespace std;


int ceil(int a,int b) {
		return (a+b-1)/b;
	}


int32_t main(){ 
    int t;
    cin>>t;
    
		while(t-->0){
      ll n;
			cin>>n;
				stack<int> q;
				for (int i = 1; i <=n; i++) {
					q.push(i);
				}

				vector<pair<int,int>> d;

				while(q.size()!=1){
					ll min=q.top();
					q.pop();
					ll semin=q.top();
					q.pop();

					d.push_back({min,semin});

					q.push(ceil(min+semin,2));

				}
					cout<<q.top()<<endl;

					ll k=d.size();

					for (int i = 0; i <k; i++) {
						cout<<d[i].first<<" "<<d[i].second<<endl;
					}
		}
  
	
	return 0;
}