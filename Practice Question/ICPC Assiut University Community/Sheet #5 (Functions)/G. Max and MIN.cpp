#include<bits/stdc++.h>
using namespace std;

int equ(int a[],int n){

  int min=1000000,max=0;

  for (int i = 0; i <n; i++)
  {
    if(a[i]>max){
      max=a[i];
    }

    if(a[i]<min){
      min=a[i];
    }
  }
  
  cout<<min<<" "<<max<<endl;
}
int main(){
	int n;
	cin>>n;

  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }


equ(a,n);
    

  return 0;
}