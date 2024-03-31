//author:emre yazicioglu
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// #define fori(a,b,c) for(int a=b;a<(int)c;a++)
int mid,h1,h2,m1,m2,t1,t2;
int main(){
    scanf("%02d:%02d%02d:%02d",&h1,&m1,&h2,&m2);
    mid=(h1*60+m1+h2*60+m2)/2;
    printf("%02d:%02d",mid/60,mid%60);
}
