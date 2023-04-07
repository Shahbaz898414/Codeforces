#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// void printRecusion(ll *a,ll n,ll h){
//   if(h>=n){
//     return;
//   }
//   printRecusion(a,n,h+2);
//   cout<<a[h]<<" ";
// }

int main() {
    int space, rows;
    cin >> rows;
    for(int i = 1, k = 0; i <= rows; ++i, k = 0) {
        for(space = 1; space <= rows-i; ++space) {
            cout <<" ";
        }
        while(k != 2*i-1) {
            cout << "*";
            ++k;
        }
        cout << endl;
    }    
  return 0;
}