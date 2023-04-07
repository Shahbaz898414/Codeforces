#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
  ll n,c=0,r,i,j,k;
  cin>>n;

  int arr[n];

   for ( i = 0; i < n; i++)  
    {  
        cin>>arr[i];  
    }  


  for ( i = n-1; i >=0; i --)  
    {  
        for ( j =n-1; j >=i+1; j--)  
        {  
              
            if ( arr[i] == arr[j])  
            {  
                 
                for ( k = n-1; k >j; k--)  
                {  
                    arr[k] = arr [k + 1];  
                }  
              
                n--;  
                   
                j--;      
            }  
        }  
    }  
      
      
    
      
    // for loop to print the array  
    for ( i = 0; i < n; i++)  
    {  
        cout<<arr[i]<<" ";
    }  
    return 0;  
}  
  