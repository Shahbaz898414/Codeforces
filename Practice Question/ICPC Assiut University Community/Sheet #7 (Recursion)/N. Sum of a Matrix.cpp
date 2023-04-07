#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
   int row, col, m1[1000][1000], m2[1000][1000], sum[1000][1000];
   cin>>row>>col;
  
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j < col;j++ ) {
       cin>>m1[i][j];
     }
   }

   for(int i = 0;i<row;i++ ) {
     for (int j = 0;j<col;j++ ) {
       cin>>m2[i][j];
     }
   }
  
   for (int i = 0;i<row;i++ ) {
      for (int j = 0;j<col;j++ ) {
        sum[i][j]=m1[i][j]+m2[i][j];
        cout<<sum[i][j]<<" ";
      }
      cout<<endl;
   }

   return 0;
}
