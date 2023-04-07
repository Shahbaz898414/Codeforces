#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;

int UnOrderLinearSearch(ll a[],ll n,ll m ){

  for (int i = 0; i <n; i++) {
    if(a[i]==m){
      return i;
    }
  }

  return -1;

}

int SortedLinearSreach(ll a[],ll n,ll m){
  for (int i = 0; i <n; i++)
  {
    if(a[i]==m){
      return i;
    }

    if(a[i]>m){
      return -1;
    }
  }

  return -1;
  
}

int BinarySearch(ll a[],ll n,ll m){
  int low=0,high=n-1;

  while(low<=high){
    int mid= low+(high-low)/2;

    if(a[mid]==m){
      return mid;
    }
    else if(a[mid]>m){
      high=mid-1;
    }
    else{
      low=mid+1;
    }
  }

  return -1;
}


int BinarySearchRec(ll a[],ll n,ll m,ll low,ll high){
  // int low=0,high=n-1;

  if(low>high){
    return -1;
  }

  int mid=low+(high-low)/2;

  if(a[mid]==m){
    return mid;
  }

  if(a[mid]>m){
    return BinarySearchRec(a,n,m,low,mid-1);
  }

  if(a[mid]<m){
    return BinarySearchRec(a,n,m,mid+1,high);
  }

  
  // return -1;
}



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i,j,k;
    int n,m;
   
    cin>>n;
    ll a[n];

    for(i=0;i<n;i++){
      cin>>a[i];
    }

    cin>>m;

    // UnOrderLinearSearch(a,n,m);
    // SortedLinearSreach(a,n,m);

    int low=0,high=n-1;

    cout<<BinarySearch(a,n,m)<<endl;
    cout<<BinarySearchRec(a,n,m,low,high);

       
	return 0;
}