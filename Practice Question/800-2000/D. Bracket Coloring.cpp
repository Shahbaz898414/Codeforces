#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {

    int n, c1 = 0, c2 = 0, ctr = 0;
        cin >> n;
        string s;
        cin >> s;
        vector<int> a(n);
        
        for(int i = 0; i < n; i++){
            if(s[i] == ')') ctr++;
            else ctr--;
            
            if(ctr < 0){
                c1 = 1;
                a[i] = 1;
            }
            else if(ctr > 0){
                c2 = 1;
                a[i] = 2;
            }
            else
                a[i] = a[i-1];
        }
        
        if(ctr != 0)
            cout << -1 << endl;
        else{
            if(c2 && c1){
                cout << 2 << endl;
                for(int i = 0; i < n; i++)
                    cout << a[i] << " ";
                cout << endl;
            }
            else{
                cout << 1 << endl;
                for(int i = 0; i < n; i++)
                    cout << 1 << " ";
                cout << endl;
            }
        }

    
   
  }
}



/*

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int arr[200005];
void solve()
{
	int n;
	cin >> n;
	string str;
	cin >> str;
	for(int i = 0; i < n; i++)
	{
		if(str[i] == '(') arr[i+1] = arr[i] + 1;
		else arr[i+1] = arr[i] -1;
	}
	if(arr[n])
	{
		printf("-1\n");
		return ;
	}
	else 
	{
		if(*min_element(arr+1,arr+1+n) == 0 || *max_element(arr+1,arr+1+n) == 0)
		{
			printf("1\n");
			for(int i =1 ; i <= n; i++)
			{
				printf("1 ");
			}
			puts("");
		}
		else
		{
			printf("2\n");
			vector<int> ans;
			int a = 0;
			while(a < n)
			{
				int w = (str[a] == '(' ? 1 : 2);
				do {
					a++;
					ans.push_back(w);
				}while(arr[a] != 0);
				
			 } 
			 for(int j = 0; j < n; j++)
				{
					printf("%d ",ans[j]);
				}
				puts("");
		}
	}
}

int main (void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--)
	solve();
	return 0;
}

*/