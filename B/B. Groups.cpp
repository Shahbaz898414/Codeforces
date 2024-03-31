#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n][5];
        for(int i = 0;i<n;i++){
            for(int j = 0;j<5;j++)cin>>a[i][j];
        }
        string ans = "NO";
        for(int i  =0;i<5;i++){
            for(int j = 0;j<5;j++){
                if(i!=j){
                    int day1 = i, day2 = j;
                    int c1 = 0, c2 = 0, c = 0;
                    for(int k = 0;k<n;k++){
                        if(a[k][day1]==1)c1++;
                        if(a[k][day2]==1)c2++;
                        if(a[k][day1]==0 and a[k][day2]==0)c++;
                    }
                    
                    if(c1>=n/2 and c2>=n/2 and c==0){
                        ans = "YES";
                        break;
                    }
                }
            }
            if(ans=="YES")break;
        }
        cout<<ans<<endl;
    }
}