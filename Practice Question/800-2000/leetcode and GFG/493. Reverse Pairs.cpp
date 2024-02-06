#include <bits/stdc++.h>
using namespace std;

 int reversePairs(vector<int>& nums) {
        int n = nums.size();
        long long reversePairsCount = 0;
       
    }

signed main()
{

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    /* code */
    cin >> arr[i];
  }

  return 0;
}



/***************************************** Approach 2 ****************************************

class Solution {
private: 
    void merge(vector<int>& nums, int low, int mid, int high, int& reversePairsCount){
        int j = mid+1;
        for(int i=low; i<=mid; i++){
            while(j<=high && nums[i] > 2*(long long)nums[j]){
                j++;
            }
            reversePairsCount += j-(mid+1);
        }
        int size = high-low+1;
        vector<int> temp(size, 0);
        int left = low, right = mid+1, k=0;
        while(left<=mid && right<=high){
            if(nums[left] < nums[right]){
                temp[k++] = nums[left++];
            }
            else{
                temp[k++] = nums[right++];
            }
        }
        while(left<=mid){
            temp[k++] = nums[left++]; 
        }
        while(right<=high){
            temp[k++] = nums[right++]; 
        }
        int m=0;
        for(int i=low; i<=high; i++){
            nums[i] = temp[m++];
        }
    }

    void mergeSort(vector<int>& nums, int low, int high, int& reversePairsCount){
        if(low >= high){
            return;
        }
        int mid = (low + high) >> 1;
        mergeSort(nums, low, mid, reversePairsCount);
        mergeSort(nums, mid+1, high, reversePairsCount);
        merge(nums, low, mid, high, reversePairsCount);
    }
public:
    int reversePairs(vector<int>& nums) {
        int reversePairsCount = 0;
        mergeSort(nums, 0, nums.size()-1, reversePairsCount);
        return reversePairsCount;
    }
};

*/

/*


class Solution {
public:
    int ans=0;
    vector<long long>merge(vector<long long>&v1, vector<long long>&v2){
        long long l1=v1.size();
        long long l2=v2.size();
        vector<long long>v;
        long long pt1=0,pt2=0;
        while(pt1<l1 && pt2<l2){
            if(v1[pt1]<=v2[pt2]){
                v.push_back(v1[pt1]);
                pt1++;
            }else{
                v.push_back(v2[pt2]);
                pt2++;
            }
        }
        while(pt1<l1){
            v.push_back(v1[pt1]);
            pt1++;
        }
        while(pt2<l2){
            v.push_back(v2[pt2]);
            pt2++;
        }
        return v;
    }
    vector<long long> mergeSort(int l,int h,vector<int>& nums){
        if(l==h)return {nums[l]};
        long long m=(l+h)/2;
        vector<long long>v1 = mergeSort(l,m,nums);
        vector<long long>v2 = mergeSort(m+1,h,nums);
        long long l1=v1.size(), l2=v2.size();
        long long p1=0,p2=0;
        while(p1<l1 && p2<l2){
             if(v1[p1] <= 2*v2[p2]){
                 p1++;
             }else{
                 ans+=l1-p1;
                 p2++;
             }
        }
        return merge(v1,v2);
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        vector<long long>v=mergeSort(0,n-1,nums);
        return ans;
    }
};


*/