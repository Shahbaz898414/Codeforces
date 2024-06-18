#include <unordered_map>
#include <string>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for (int i = (a); i < (int)(b); ++i)

#define large (int)1e5 + 5
bool isValid(string s) {
  int len = s.size();
  for (int i = 0; i < len / 2; i++) {
    if (s[i] != s[len - 1 - i])
      return false;
  }
  return true;
}

bool good(int x) {
  int t, n, a[1000000];
  for (int i = 1, j = n; i <= j; ++i, --j) {
    if (a[i] == a[j]) continue;
    if (a[i] != x and a[j] != x) return 0;
    if (a[i] == x) ++j; else --i;
  } return 1;
}
vector<int> combination;
void rotateMatrix(vector<vector<int>> &v, int n) {
  for(int i = 0; i < n / 2; i++){
    for(int j = i; j < n - i - 1; j++) {
      int ptr = v[i][j];
      v[i][j] = v[n - 1 - j][i];
      v[n - 1 - j][i] = v[n - 1 - i][n - 1 - j];
      v[n - 1 - i][n - 1 - j] = v[j][n - 1 - i];
      v[j][n - 1 - i] = ptr;
    }
  }
}


   class MedianFinder {
private:
    priority_queue<int> maxHeap; // Stores the smaller half of numbers
    priority_queue<int, vector<int>, greater<int>> minHeap; // Stores the larger half of numbers
    double median;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        // Add the number to the appropriate heap
        if (maxHeap.empty() || num <= maxHeap.top()) {
            maxHeap.push(num);
        } else {
            minHeap.push(num);
        }
        
        // Rebalance heaps if necessary
        if (maxHeap.size() > minHeap.size() + 1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        } else if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }
    
    double findMedian() {
        if (maxHeap.size() == minHeap.size()) {
            // If the number of elements is even, take the average of the two middle elements
            return (maxHeap.top() + minHeap.top()) / 2.0;
        } else {
            // If the number of elements is odd, the median is the top of the max heap
            return maxHeap.top();
        }
    }
};



set<int> mp;
void thr(vector<vector<int>> &v, int n) {
  for(int i = 0; i < n / 2; i++){
    for(int j = i; j < n - i - 1; j++) {
      int ptr = v[i][j];
      v[i][j] = v[n - 1 - j][i];
      v[n - 1 - j][i] = v[n - 1 - i][n - 1 - j];
      v[n - 1 - i][n - 1 - j] = v[j][n - 1 - i];
      v[j][n - 1 - i] = ptr;
    }
  }
}
ll z = 16;
bitset<large + 5> setcombination;

void cal()
{
    // main code
    setcombination.set();
    setcombination[0] = setcombination[1] = 0;
    for (int i = 2; i <= sqrt(large) + 2; i++)
    {
        if (setcombination[i])
        {
            combination.push_back(i * i);
            mp.insert(i * i);
            for (int j = i * i; j <= large; j += i)
                setcombination[j] = 0;
        }
    }
    for (int i = sqrt(large) + 3; i < large; i++)
        if (setcombination[i])
        {
            combination.push_back(i * i);
            mp.insert(i * i);
        }
}



int solve (int n,vector<int>  dp){
   if(n<=1) return n;
  // if(n==0)  return 0;
  if(dp[n]!=-1) return dp[n];

  dp[n]=solve(n-1,dp)+solve(n-2,dp);

  return dp[n];

}


// 0 1 1 2 3 5


int main() {


    int n;cin>>n;

    vector<int> dp(n+1,-1);

    // dp[0]=0;
    // dp[1]=1;

    cout<<solve(n,dp)<<endl;

    // cout<<dp[n]<<endl;

    return 0;
}


/*

 std::string encode(std::vector<std::string>& strs) {
        std::string ans = "";
        for (const std::string& s : strs) {
            ans += std::to_string(s.length()) + "$" + s;
        }
        return ans;
    }

    std::vector<std::string> decode(std::string s) {
        std::vector<std::string> ans;
        int i = 0;
        while (i < s.length()) {
            int j = i;
            while (s[j] != '$') {
                j++;
            }
            int len = std::stoi(s.substr(i, j - i));
            ans.push_back(s.substr(j + 1, len));
            i = j + 1 + len;
        }
        return ans;
    }


*/