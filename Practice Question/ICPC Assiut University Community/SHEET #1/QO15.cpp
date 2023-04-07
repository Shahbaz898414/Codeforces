#include<bits/stdc++.h>
using namespace std;
int main() {
 int n1,n2;
 char op; 
 cin>>n1
;
 switch (op){
 case '+':
 cout<<n1+n2<<endl;
 break;
 case '-':
 cout<<n1-n2<<endl;
 break;
 case '*':
 cout<<n1*n2<<endl;
 break;
 case '/':
 cout<<n1/n2<<endl;
 break;
 case '%':
 cout<<n1%n2<<endl;
 break;
 default:
 cout<<"Operat  not found!"<<endl;
 break;
 }
return 0;

}


