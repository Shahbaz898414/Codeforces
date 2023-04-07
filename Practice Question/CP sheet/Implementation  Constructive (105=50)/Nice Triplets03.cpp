#include <bits/stdc++.h>
using namespace std;
int countTriplets(int arr[], int n){
   int count = 0;
   for (int i = 0; i < n-2; i++){
      for (int j = i+1; j < n-1; j++){
         for (int k = j+1; k < n; k++){
            if(arr[i]+arr[j]>arr[k] || arr[j]+arr[k]>arr[i] || arr[k]+arr[i]>arr[j]){                   count++;
             }
         }
      }
   }
   return count;
}
int main(){

     int n;cin>>n;
     int a[n];
  for (int i = 0; i <n; i++) {
    cin>>a[i];
  }
  
  
   countTriplets(a,n);
   return 0;
}