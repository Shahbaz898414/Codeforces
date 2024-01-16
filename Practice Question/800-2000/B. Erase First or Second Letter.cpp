#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    string s;
    cin >> s;

    set<char> se;

    int ans=0;

    for (int i = 0; i < n; i++)
    {
      se.insert(s[i]);

      cout<<se.size()<<" ";

      ans+=se.size();
    }


    cout<<endl;
    // for (auto it : se)
    // {
    //   cout << it << " ";
    // }

    // cout << endl;

    cout << ans<< endl;


  }

  return 0;
}



/*


ababa 1
a baba 2
b aaba 2
aba bba 2
ba aa 2






*/