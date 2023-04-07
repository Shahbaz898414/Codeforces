
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {

    int t;
    cin>>t;
    while(t--){

    

    int n;
    cin>>n;
    int even_pos = 0 , even_neg=0 , odd_pos=0 , odd_neg=0;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i%2==0)
        {
            if(a[i]>0)even_pos++;
            else even_neg++;
        }
        else
        {
             if(a[i]>0)odd_pos++;
             else odd_neg++;
        }
    }
    int epon=even_neg+odd_pos; //trying to get even pe neg and odd pe pos
    int enop=even_pos+odd_neg; // trying to get odd pe neg and even pe pos
    // cout<<epon<<" "<<enop<<endl;
    cout<<min(epon,enop)<<endl;
    }

    return 0;
}