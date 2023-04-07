 #include<bits/stdc++.h>
 #define ll long long int
 using namespace std;
 
 bool isPalidrome(int a[],int n) {
  int i=0;
  int j= n-1;
  while(i<j) {
    if(a[i]==a[j]) {
      i++;
      j--;
    }
    else{
      return false;
    }
  }
  return true;
 }
 int main() {
   int n;
   cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
  
    if(isPalidrome(a,n)) {
      cout<<"YES";
    }else{
      cout<<"NO";
    }
    return 0;
 }