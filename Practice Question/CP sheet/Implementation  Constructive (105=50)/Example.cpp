#include <iostream>
#define ll long long int
using namespace std;

int gdf(int b,int c){
   if(c==0){
      return b;
   }
   return gdf(c,b%c);
}

int main()
{
  int t;cin>>t;
  while(t--){
     ll b,c;cin>>b>>c;

      int g=gdf(b,c);
      cout<<c/g<<endl;
     
  }
   return 0;
}