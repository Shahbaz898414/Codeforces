#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    int sum=0,Icosahedron=20,Cube=6,Tetrahedron=4,Dodecahedron=12,Octahedron=8;
    while(t-->0){
      string s;cin>>s;

      if(s[0]=='T'){
        sum+=Tetrahedron;
        // cout<<"T"<<endl;
      }else if(s[0]=='C'){
        sum+=Cube;
        //  cout<<"C"<<endl;
      }else if(s[0]=='O'){
        sum+=Octahedron;
        //  cout<<"O"<<endl;
      }else if(s[0]=='D'){
        sum+=Dodecahedron;
        //  cout<<"D"<<endl;
      }else if(s[0]=='I'){
        sum+=Icosahedron;
        //  cout<<"I"<<endl;
      }
    }
    cout<<sum;
}