#include <bits/stdc++.h>
using namespace std;

int maxScore(vector<int> &cardPoints, int k)
{
  int res = 0;

  for (int i = 0; i < k; i++)
    res += cardPoints[i];

  int curr = res;
  for (int i = k - 1; i >= 0; i--) {

    curr -= cardPoints[i];
    curr += cardPoints[cardPoints.size() - k + i];

    res = max(res, curr);
  }

  return res;
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

/*

class Solution {

     public int maxScore(int[] cardPoints, int k) {
        int result=0;

        int n=cardPoints.length;

        int sum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        int leftIndex = k-1;
        if(leftIndex == n-1) return sum;

        int rightIndex = n-1;
        int rightSum = 0; // prefix sum from n-1 to n-k
        int leftSum = 0; //prefix sum from k-1 to 0

        while(k-->0 && leftIndex < rightIndex){
            rightSum += cardPoints[rightIndex--];
            leftSum += cardPoints[leftIndex--];
            if(rightSum > leftSum){
                sum-=leftSum;
                sum+=rightSum;
                leftSum=0;
                rightSum=0;
            }
        }
        return sum;
    }
}

*/

/*



class Solution {
    public int maxScore(int[] cardPoints, int k) {
        int n = cardPoints.length;
        int sum=0;
        for(int i=0; i< k; i++) {
            sum+= cardPoints[i];
        }
        if(n == k) {
            return sum;
        }
        int p1 = k-1;
        int p2 = n-1;
        int res = sum;
        while(p1 >= 0) {
            sum -= cardPoints[p1--];
            sum += cardPoints[p2--];
            res = Math.max(res, sum);
        }
        return res;
    }
}


*/