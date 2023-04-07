#include <bits/stdc++.h>
using namespace std;

void findTriplet(int arr[], int n) {	
  int c=0;
	sort(arr, arr + n);

	for (int i = n - 1; i >= 0; i--) {
		int j = 0;
		int k = i - 1;

		while (j < k) {
			
			if ((arr[i] == arr[j] + arr[k]) and (arr[j] == arr[i] + arr[k]) && (arr[k] == arr[j] + arr[i])) {
          c++;
			}
	
			else if (arr[i] < arr[j] + arr[k])
				j += 1;

			else
				k -= 1;
		}
	}
	

  cout<<c<<endl;
}

int main() {

  int n;cin>>n;
	int arr[n];
  for (int i = 0; i <n; i++) {
   cin>>arr[i];
  }
  
	findTriplet(arr, n);
	return 0;
}
