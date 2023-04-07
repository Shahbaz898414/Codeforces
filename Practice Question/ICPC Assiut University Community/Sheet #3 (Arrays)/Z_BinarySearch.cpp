#include <bits/stdc++.h>
using namespace std;

int bs(int a[],int n,int res)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==res)return 0;
        else if(a[mid]>res)r=mid-1;
        else l=mid+1;
    }
    return 1;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a, a + n);
    for(int i=0;i<m;i++)
    {
        int f;
        cin>>f;
        int t=bs(a,n,f);
        if(t==0)cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }
    return 0;
}