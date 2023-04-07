#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
   int t;cin>>t;
   while(t--){
    ll n,m,r,c;
    cin>>n>>m>>r>>c;
    r=r-1;
    c=c-1;
    char a[n][m];
   int d=0,ans=0;
   for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
            if(a[i][j]=='B'){
              d++;
            }
        }
    }

    if(d==0){
      cout<<-1<<endl;
    }else{
      if(a[r][c]=='B'){
        cout<<0<<endl;
      }else{
       for (int i = 0; i<m; i++) if(a[r][i]=='B')ans++;
       for (int i = 0; i<n; i++)if(a[i][c]=='B')ans++;
       if(ans==0 )cout<<2<<endl;
       else cout<<1<<endl;
      }
    }
   }
  return 0;
}
/*

9              
3 5 1 4
WBWWW
BBBWB
WWBBB
4 3 2 1
BWW
BBW
WBB
WWB
2 3 2 2
WWW
WWW
2 2 1 1
WW
WB
5 9 5 9
WWWWWWWWW
WBWBWBBBW
WBBBWWBWW
WBWBWBBBW
WWWWWWWWW
1 1 1 1
B
1 1 1 1
W
1 2 1 1
WB
2 1 1 1
W
B
*/

// tect case with outputs below

/*

3 5 1 4
WBWWW
BBBWB
WWBBB

1

4 3 2 1
BWW
BBW
WBB
WWB

0

2 3 2 2
WWW
WWW

-1

 2 2 1 1
WW
WB
2

5 9 5 9
WWWWWWWWW
WBWBWBBBW
WBBBWWBWW
WBWBWBBBW
WWWWWWWWW

2

1 1 1 1
B

0

1 1 1 1
W

-1

1 2 1 1
WB

1

2 1 1 1
W
B

1
*/