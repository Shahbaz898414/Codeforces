#include<bits/stdc++.h>
using namespace std;


int numberOfPoints(vector<vector<int>>& nums) {

    int sz = nums.size();
    vector<int> pref(200);

        for(auto &num : nums){
            pref[num[0]] += 1;
            pref[num[1]+1] -= 1;
        }



        for(int indx = 0; indx < pref.size(); indx++){
           if(indx != 0) 
            pref[indx] += pref[indx-1];

            // cout<<pref[indx]<<" ";
        }

        // cout<<endl;


        int zeros = count(pref.begin(), pref.end(), 0);

        // cout<<zeros<<endl;


        return pref.size() - zeros;


}




int main()
{

    int n;cin>>n;

    vector<vector<int>> arr(n,vector<int>(2));

    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }


      cout<<numberOfPoints(arr);  
    

    // cout << numberOfArithmeticSlices(arr);
}


