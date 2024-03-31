#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
  int top = 0;
  int left = 0;

  int right = matrix.size();
  vector<int> v;
  int bottom = matrix[0].size() - 1;

  while (1)
  {

    if (left > right)
      break;

    for (int i = 0; i < right; i++)
    {
      /* code */

      v.push_back(matrix[top][i]);
    }

    top++;

    if (top > bottom)
    {
      break;
    }

    for (int i = top; i <= bottom; i++)
    {
      /* code */
      v.push_back(matrix[i][right]);
    }

    right--;

    if (left > right)
    {
      break;
    }

    for (int i = right; i >= left; i--)
    {
      /* code */

      v.push_back(matrix[bottom][i]);
    }

    bottom--;

    if (top > bottom)
    {
      break;
    }
    // print left column
    for (int i = bottom; i >= top; i--)
    {
      // cout << matrix[i][left] << " ";
      v.push_back(matrix[i][left]);
    }
    left++;
  }
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


List<Integer> result = new ArrayList<>();
        if (matrix == null || matrix.length == 0) {
            return result;
        }
        
        int rows = matrix.length, cols = matrix[0].length;
        int left = 0, right = cols-1, top = 0, bottom = rows-1;
        
        while (left <= right && top <= bottom) {
            for (int i = left; i <= right; i++) {
                result.add(matrix[top][i]);
            }
            top++;
            
            for (int i = top; i <= bottom; i++) {
                result.add(matrix[i][right]);
            }
            right--;
            
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    result.add(matrix[bottom][i]);
                }
                bottom--;
            }
            
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    result.add(matrix[i][left]);
                }
                left++;
            }
        }
        
        return result;


*/