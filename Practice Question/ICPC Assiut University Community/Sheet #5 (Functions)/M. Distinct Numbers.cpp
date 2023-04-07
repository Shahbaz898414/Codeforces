#include<bits/stdc++.h>
#define ll long long int
using namespace std;

double  Distinctnumbers(int a[],int n){
  int c=0;
  for(int i=0;i<n;i++){
   if(a[i]!=a[++i]){
     c++;
   }
   i--;
  }

  cout<<c<<endl;
  
}

int main() {

  int n;
  cin>>n;

  int a[n];

  for (int i = 0; i < n; i++) {
    cin>>a[i];
  }

  sort(a,a+n);

 
  
  Distinctnumbers(a,n);
  
 return 0;
}

