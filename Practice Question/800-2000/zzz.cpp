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




/*

Subject: Re: Job Inquiry - Response to your Questions

Hi Jeevitha Mohan,

I hope this email finds you well. Thank you for considering my profile. Please find my responses to your queries below:

Location:
I am currently based in Mumbai. However, I am open to relocating to Bengaluru if the opportunity aligns with my career goals.

Relocation:
Yes, I am open to relocating to Bengaluru. I am willing to take care of the relocation process on my own.

Stipend:
I am comfortable with the stipend range of 15-20k per month for the initial 6 months.

Joining Time:
I am an immediate joiner and can commence my employment as soon as required. My earliest possible start date is 7.

JD Awareness:
NO

Github Link:
Here is the link to my GitHub profile: https://github.com/Shahbaz898414

I am enthusiastic about the opportunity to contribute to [Company Name], and I am looking forward to the possibility of discussing my application further.

Thank you once again for considering my application.

Best regards,
shahbaz Khan
7710968756


*/