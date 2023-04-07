#include<bits/stdc++.h>
using namespace std;

int main(){
  int x,y,r,m,d;
  cin>>x;
  if(x>=0){
     y=x/365;
     r=x%365;
     m=r/30; 
     d=r%30;
  }
  cout<<y<<" years"<<endl<<m<<" months"<<endl<<d<<" days";
  // if(x<0 and y<0){
  //   cout<<"Q3";
  // }
  // if(x>0 and y>0){
  //   cout<<"Q1";
  // }
  // if(x<0 and y>0){
  //   cout<<"Q2";
  // }
  return 0;
}