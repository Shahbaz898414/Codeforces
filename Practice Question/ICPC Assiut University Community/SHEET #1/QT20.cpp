#include<bits/stdc++.h>
using namespace std;

int main(){
  int x,y,z;
  cin>>x>>y>>z;
  int max,min,def;
  if(x<=y and x<=z){
    max=x;
    if(y<=z){
    min=y;
    def=z;
  }
  else{
     min=z;
     def=y;
  }
  }
  if(y<=x and y<=z){
    max=y;
    if(x<=z){
    min=x;
    def=z;
  }
  else{
     min=z;
     def=x;
  }
  }

  if(z<=x and z<=y){
    max=z;
    if(x<=y){
    min=x;
    def=y;
  }
  else{
     min=y;
     def=x;
  }
  }

  cout<<max<<endl<<min<<endl<<def<<endl;
  cout<<endl;


  cout<<x<<endl<<y<<endl<<z;

  
  
  return 0;
}