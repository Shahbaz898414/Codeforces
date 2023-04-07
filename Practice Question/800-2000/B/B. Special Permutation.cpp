#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,a ,b;
		cin>>n>>a>>b;
		if((a<=n/2)&&(b>=n/2+1) ||(a==n/2+1) &&(b==n/2)){
			cout<<a<<" ";
			for(int k=n;k>0;k--){
				if(k!=a&&k!=b){
					cout<<k<<" ";
				}
				}
				cout<<b<<endl;
			}
			else{
				cout<<-1<<endl;
			}
		}
		return 0;
	}