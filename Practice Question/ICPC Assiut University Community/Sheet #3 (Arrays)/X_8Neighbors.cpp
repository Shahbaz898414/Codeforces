// #include <bits/stdc++.h>
// #define ll long long char
// using namespace std;

// int main() { 
//   int n,m;
//   cin >>n>>m;
//     char a[n][m];

//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//       cin>>a[i][j];
//     }
//   }

//   int x,y;
//   cin>>x>>y;
//   x=x-1;
//   y=y-1;

//   if((((a[x][y-1])!=".") &&
//    (a[x][y+1] !=".") &&
//    (a[x-1][y]!=".") && 
//    (a[x+1][y]!=".") &&
//    (a[x-1][y-1]!=".") &&
//    (a[x-1][y+1]!=".") &&
//    (a[x+1][y-1]!=".") &&
//    (a[x+1][y+1]!="."))){
//     cout<<"yes"<<endl;
//   }else {
//     cout<<"no"<<endl;
//   }
  
//   return 0;
// }


 

 #include <bits/stdc++.h>
#define ll long long char
using namespace std;

int main() { 
  int n,m;
  cin >>n>>m;
  char a[101][101];
  
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cin>>a[i][j];
    }
  }
  int x,y;
  cin>>x>>y;
 

  if(a[x-1][y-1]=='x' 
  && a[x-1][y] =='x' 
  && a[x-1][y+1] =='x' 
  &&  a[x][y-1]=='x' 
  && a[x][y+1]=='x' 
  && a[x+1][y-1]=='x' 
  && a[x+1][y]=='x' 
  && a[x+1][y+1]=='x'){
    cout<<"yes"<<endl;
  }else {
    cout<<"no"<<endl;
  }
  return 0;
}
