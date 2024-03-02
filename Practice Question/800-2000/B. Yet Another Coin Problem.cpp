#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

int32_t main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {

    ll n;
		cin >> n;
		ll mas[31];
		mas[1] = 1;
		mas[2] = 2;
		mas[3] = 1;
		mas[4] = 2;
		mas[5] = 3;
		mas[6] = 1;
		mas[7] = 2;
		mas[8] = 3;
		mas[9] = 2;
		mas[10] = 1;
		mas[11] = 2;
		mas[12] = 2;
		mas[13] = 2;
		mas[14] = 3;
		mas[15] = 1;
		mas[16] = 2;
		mas[17] = 3;
		mas[18] = 2;
		mas[19] = 3;
		mas[20] = 2;
		mas[21] = 2;
		mas[22] = 3;
		mas[23] = 3;
		mas[24] = 3;
		mas[25] = 2;
		mas[26] = 3;
		mas[27] = 3;
		mas[28] = 3;
		mas[29] = 4;
		mas[30] = 2;
		ll used = n/15;

		ll left = n%15;
    cout<<used<<" "<<left<<endl;
		if(left == 0){
			cout << used << endl;
			continue;
		}
		if(n <= 30){
			cout << mas[n] << endl;
			continue;
		}


		cout << min(used - 1 + mas[left+15], used + mas[left]) << endl;

   
    
  }
  return 0;
}










