#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define M 1000000007

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        ll x;
        ll l = a.size();
        if(l == 1){
            cout<<"Bob ";
            x = a[0] - 'a' + 1;
            cout<<x;
        }
        else{
            // cout<<"Alice ";
            ll sum = 0, i;
            if(l&1){
                if(a[0] >= a[l-1]){
                    for(i = 0; i < l-1; i++){
                        sum = sum + a[i] - 'a' + 1;
                        // cout<<sum<<"  a[0] >= a[l-1]"<<endl;
                    }

                    // cout<<sum<<"  before+a -1"<<endl;

                    sum = sum - a[l-1] + 'a' - 1;
                      // cout<<sum<<"  +a -1"<<endl;

                  
                }
                else{
                    for(i = 1; i < l; i++){
                        sum = sum + a[i] - 'a' + 1;
                          // cout<<sum<<"  else"<<endl;
                    }

                    // cout<<sum<<"  before+a -1"<<endl;

                    
                    sum = sum - a[0] + 'a' - 1;

                    // cout<<sum<<"  +a -1"<<endl;

                }
            }
            else{
                for(i = 0; i < l; i++){
                    sum = sum + a[i] - 'a' + 1;
                }

            }
            // cout<<sum;
        }
        cout<<endl;
    }
}