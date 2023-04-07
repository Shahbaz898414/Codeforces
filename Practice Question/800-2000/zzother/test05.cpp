#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;
    while(t-->0){
        int n;cin>>n;

        int arr[1010];
        int temp[1010];

        for (int i = 1; i <=n; i++){
            cin>>arr[i];
            temp[i]=i;
        }
        if(n==1){
            cout<<-1<<endl;
            continue;
        }

        for (int i = 1; i <n; i++) {
            if(arr[i]==temp[i]){
                swap(temp[i],temp[i+1]);
            }
	    }

        if(arr[n]==temp[n]){
            swap(temp[n-1],temp[n]);
        }

        for (int i = 1; i <=n; i++)
        {
            
            cout<<temp[i]<< " ";
        }

        cout<<endl;
      
    }

   

	return 0;
}
