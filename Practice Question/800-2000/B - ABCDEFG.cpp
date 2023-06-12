
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

  char a, b;
  cin >> a >> b;

  ll s1=a-'a';
  ll s2=b-'a';

  // cout<<s1<<" "<<s2<<endl;
   ll arr[7];

   arr[1]=3;
   arr[2]=1;
   arr[3]=4;
   arr[4]=1;
   arr[5]=5;
   arr[6]=9;

   for (int i = 1; i <=6; i++)
   {
    /* code */
    arr[i]=arr[i]+arr[i-1];
   }


   cout<<abs(arr[min(s1,s2)]-arr[max(s1,s2)])<<endl;


   


  ll ab = 1;
  ll bc = 1;
  ll cd = 4;
  ll de = 1;
  ll ef = 5;
  ll fg = 9;




  return 0;
}


