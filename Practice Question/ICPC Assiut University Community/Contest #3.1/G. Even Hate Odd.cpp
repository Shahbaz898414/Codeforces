// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main() {

//   int t;
//   cin>>t;
//   while(t--){
//       int n;
//     cin>>n;
//     int even_pos = 0 , even_neg=0 , odd_pos=0 , odd_neg=0;
//     ll a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//         if(i%2==0)
//         {
//             if(a[i]%2==0)even_pos++;
//             else odd_pos++;
//         }
//         else
//         {
//              if(a[i]%2!=0)odd_pos++;
//              else even_pos++;
//         }
//     }
// // cout<<even_pos<<endl;
// // cout<<odd_pos<<endl;
//     if(even_pos==odd_pos){
//       cout<<0<<endl;
//     }else if(even_pos==n || odd_pos==n){
//       cout<<n/2<<endl;
//     }else if(even_pos>odd_pos || odd_pos>even_pos){
//       cout<<-1<<endl;
//     }
// //     if( even_neg==n){
     
// //        cout<<"-1"<<endl;
// //     }
// //     else{
// //       cout<<even_pos<<endl;
// //     }
//   }   
//     return 0;
// }



























#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {

  int t;
  cin>>t;
  while(t--){
      ll n;
    cin>>n;
    ll even_pos = 0 , odd_pos=0;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
      if(a[i]%2==0){
        even_pos++;
      }else{
        odd_pos++;
      }
    }

    if(even_pos==odd_pos){
      cout<<"0"<<endl;
    }else if(n%2!=0){
      cout<<-1<<endl;
    }else{
      cout<<abs(even_pos-odd_pos)/2<<endl;
    }

  }   
    return 0;
}