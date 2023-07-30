#include <bits/stdc++.h>
using namespace std;



string intToRoman(int num) {

   string res;
        string sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        for(int i=0; num != 0; i++){
            while(num >= val[i]){
                num -= val[i];
                res += sym[i];
            }
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



