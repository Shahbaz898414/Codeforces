#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<38){
            cout<<arr[i]<<endl;
        }
        else if(arr[i]%5==0){
                cout<<arr[i]<<endl;
            }
        else{
          int m=arr[i]%5;
          if(m==3){
            cout<<arr[i]+2<<endl;
          }else if(m==4){
            cout<<arr[i]+1<<endl;
          }
          else{
            cout<<arr[i]<<endl;
          } 
        } 
    }

   
}


// 23
// 80
// 96
// 18
// 73
// 78
// 60
// 60
// 15
// 45
// 15
// 10
// 5
// 46
// 87
// 33
// 60
// 14
// 71
// 65{-truncated-}

// Download to view the full testcase
// Expected Output

// Download
// 80
// 96
// 18
// 75
// 80
// 60
// 60
// 15
// 45
// 15
// 10
// 5
// 46
// 87
// 33
// 60
// 14
// 71
// 65
// 2{-truncated-}

