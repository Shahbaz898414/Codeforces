#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define readInput(a) \
  for (auto &i : a)  \
  cin >> i
#define printOutput(a) \
  for (auto &i : a)    \
  cout << i << " "
#define endLine "\n"
#define space << " " <<
#define pushBack pb
#define allElements(a) a.begin(), a.end()
#define reverseAll(a) a.rbegin(), a.rend()
const int N = 1e6 + 2;
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX;
using namespace std;

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;

  while (t--)
  {
    int n, k;
    cin >> n >> k;

    vector<int> ar(n);

    // int sum = 0;

    int mx = 0, mx1 = INT_MIN, cnt = 0;

    int sum = 0, s = 0, maxs = 0;

    for (int i = 0; i < n; i++)
    {

      cin >> ar[i];
      // sum += ar[i];
    }

    for (int i = 0; i < n; i++)
    {

      sum += ar[i], s += ar[i];
      if (s < 0)
        s = 0;
      maxs = max(maxs, s);
    }

    s = maxs, sum -= maxs;
    for (int i = 1; i <= k; i++)
      s = s * 2 % MOD;
    sum = ((sum + s) % MOD + MOD) % MOD;

    cout << sum << endl;
  }
}


/*

Achieved a 20% reduction in file size by removing redundant code and dependencies.

Streamlined development process by centralizing design logic, reducing development time by 15%.

Improved development workflow by simplifying the design process, leading to a 20% decrease in development time for related feature.

Proposed value placeholders for minimum size, reducing inconsistencies by 25%, establishing absolute minimum, cutting UI errors by 30%, and boosting UX metrics by 20%.



Mentored students, simplifying complex algorithms for better understanding.
Offered guidance in Competitive Programming, aiding in strategy development
Provided curated resources to enhance algorithm comprehension.
Actively engaged in post-contest problem-solving sessions, promoting upsolving to enhance student skills.
Facilitated post-contest problem-solving sessions, promoting skill improvement.

bullent points format 
Action verbs + task/ result + quantification/ number

i did above things in my internship convert into bullet points 
i thought 180 students
help me them  to improve performance in  coding contest by 20%



Created 130+ educational videos on YouTube C++, JavaScript, React, CSS, and HTML, to deliver valuable insights and
tutorials.

Garnered a loyal subscriber base of 1500, highlighting the relevance and impact of the content in C++, JavaScript, React,
CSS, and HTML.

Created educational videos on DSA, solving contest problems from platforms like CodeChef, Codeforces, LeetCode, and AtCoder, to enhance problem-solving skills for viewers.

*/