#include <bits/stdc++.h>
using namespace std;

void CircleGame(){
    int n;
    cin>>n;
    int ar[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    if(n&1){
        cout<<"Mike"<<endl;
        return;
    }
    int in = -1;
    sum = *min_element(ar,ar+n);
    for(int i=0;i<n;i++){
        if(ar[i]==sum) {
            in = i+1;
            break;
            }   
    }
    if(in&1) {
        cout<<"Joe"<<endl;
    }
    else{
        cout<<"Mike"<<endl;
    }
 
}
int main()
{
 
    int t;
    cin >> t;
    while (t--)
    {
        CircleGame();
    }
 
    return 0;
}