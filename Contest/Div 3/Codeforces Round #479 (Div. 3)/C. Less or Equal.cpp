#include<bits/stdc++.h>
using namespace std;
int main() {
 long long  n,k;
 cin>>n>>k;
 long long  arr[300000];

 for(int i=0;i<n;i++){
	 cin>>arr[i];
 }
        
 sort(arr,arr+n);

 if(k==0) {
     if(arr[0]-1==0){
			  cout<<-1<<endl;
		 }
       
     else {
			 cout<<arr[0]-1<<endl;
		 } 
     return 0;
 } else if(k==n) {
        if(arr[k-1]<=1000000000)
           cout<<1000000000<<endl;
        else
            cout<<-1<<endl;
        return 0;
    }

 long long  found=arr[k-1];
 int elem=upper_bound(arr,arr+n,found)-arr;
//  cout<<elem<<endl;
 if(elem==k){
	   cout<<arr[elem-1]<<endl;
 } else{
	 cout<<-1<<endl;
 } 
 
    return 0;
}