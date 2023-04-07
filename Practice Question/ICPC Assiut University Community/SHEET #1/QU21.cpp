#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
  float n;cin>>n;
  if (n==(int)n) {
 
        cout <<"int "<<(int)n<<endl;
    }
    else {
      float x=n-((int)n);
      cout<<fixed<<setprecision(3);
      cout <<"float "<<(int)n<<" "<<x<<endl;
    }

  return 0;
}



