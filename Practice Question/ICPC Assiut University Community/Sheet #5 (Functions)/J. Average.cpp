#include<bits/stdc++.h>
#define ll long long int
using namespace std;

double average(int n){
  double s=0;
  for (int i = 0; i < n; i++) {
    double v;
    cin>>v;
    s+=v;
  }

  cout<<setprecision(8)<<s/n<<endl;
 
}

int main() {

  int n;
  cin>>n;
  average(n);
  
 return 0;
}

