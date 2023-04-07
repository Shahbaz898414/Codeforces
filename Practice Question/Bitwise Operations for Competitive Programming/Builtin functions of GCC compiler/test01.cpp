#include<bits/stdc++.h>
using namespace std;

int main() {
  //   int n = 6;
     
  //   printf("Parity of %d is %d ", n, __builtin_parity(n));

  //          cout<<endl;

  //   int d = 7;
     
  //   printf("Count of leading zeros before 1 in %d is %d",d, __builtin_clz(d));

  //   cout<<endl;

  //   int s = 7;
     
  //   printf("Count of leading zeros before 1 in %d is %d",s, __builtin_ctz(s));

  //   cout<<endl;

  //   // int g=s>>1;

  //   // cout<<g<<endl;

  //   int c=0;

  //  while(n) {
  //    c+=n&1;
  //    n>>=1;
  //  }

  //  cout<<c<<endl;

        cout<<fixed;
        cout<<setprecision(10);
    
            int t=1;
            cin>>t;
           while(t-->0){

             int n;
            cin>>n;
            vector<int>a(n);
            int total=0;
            for(int i=0;i<n;i++){
                int x;
                cin>>x;
                total+=x;
            }
            if(total == n) cout<<0<<"\n";
            else if(total<n) cout<<1<<"\n";
            else{
                cout<<(total - n)<<"\n";
            }

           }
    
    
    return 0;
}