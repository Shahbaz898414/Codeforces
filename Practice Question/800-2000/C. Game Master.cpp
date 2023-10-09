/*
 */

#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <math.h>
#include <stack>
#include <list>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <iomanip>
#include <utility>
#define int int64_t
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define pb push_back
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define vin(x, v)   \
  for (auto &x : v) \
    cin >> x;
#define vout(x, v) \
  for (auto x : v) \
    cout << x << " ";
#define MEM(a, b) memset(a, (b), sizeof(a))
#define loop(i, j, k) for (int i = j; i < k; i += 1)
#define rloop(i, j, k) for (int i = j; i >= k; i -= 1)
#define rep(i, j) loop(i, 0, j)
#define rrep(i, j) rloop(i, j, 0)
#define MP make_pair
#define endl "\n"
#define INF (int)1e18
#define EPS 1e-18
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
// cout <<setprecision(15)
#define NEED_FOR_SPEED_MOST_WANTED  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)
using namespace std;

/*-----------------------------------D-E-B-U-G-----------------------------------------------*/
#ifndef ONLINE_JUDGE
#define deb(x)       \
  cerr << #x << " "; \
  _print(x);         \
  cerr << endl;
#else
#define deb(x)
#endif

void _print(int32_t t)
{
  cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(long double t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(unsigned long long t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
  cerr << "{";
  _print(p.first);
  cerr << ",";
  _print(p.second);
  cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(set<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
  cerr << "[ ";
  for (auto i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

vii graph[200010];
map<int, int> degree;

void dij(int C, vi &dist)
{
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

  dist[C] = 0;
  pq.push({0, C});
  while (pq.size() > 0)
  {
    pair<int, int> alpha = pq.top();
    pq.pop();
    if (dist[alpha.second] < alpha.first)
      continue;
    for (auto x : graph[alpha.second])
    {
      if (dist[x.first] > dist[alpha.second] + x.second)
      {
        dist[x.first] = dist[alpha.second] + x.second;
        pq.push({dist[x.first], x.first});
      }
    }
  }
}

bool cmp(pair<int, pair<int, int>> p1, pair<int, pair<int, int>> p2)
{
  return p1.second.first > p2.second.first;
}

bool cmp2(pair<int, pair<int, int>> p1, pair<int, pair<int, int>> p2)
{
  return p1.second.second > p2.second.second;
}

void dfs(int curr,vector<bool>& visited,vector<int> adj[]){
    visited[curr] = true;
 
    for(auto u:adj[curr]){
        if(!visited[u])
            dfs(u,visited,adj);
    }
}


void solve()
{
  int n;
  cin >> n;

  vector<pair<int, pair<int, int>>> a(n);
  pair<int, int> mx = {INT_MIN, INT_MIN};

  for (int i = 0; i < n; i++)
  {

    a[i].first = i;
    cin >> a[i].second.first;
  }

  for (int i = 0; i < n; i++)
  {

    cin >> a[i].second.second;

    if (a[i].second.first > mx.first || a[i].second.second > mx.first)
    {
      mx.first = max(a[i].second.first, a[i].second.second);
      mx.second = i;
    }
  }

   sort(a.begin(),a.end(),cmp);
 
    vector<int> adj[n+1];
 
    for (int i = 1; i < n; i++){
        adj[a[i].first].pb(a[i-1].first);
    }
 
    sort(a.begin(),a.end(),cmp2);
 
    for (int i = 1; i < n; i++){
        adj[a[i].first].pb(a[i-1].first);
    }
 
    vector<bool> visited(n);
 
    dfs(mx.second,visited,adj);
 
    for(auto u:visited){
        cout<<u;
    }
    cout<<endl;



}

signed main()
{
  NEED_FOR_SPEED_MOST_WANTED;
  // #ifndef ONLINE_JUDGE
  // FOR GETTING INPUT FROM input.txt
  // freopen("input.txt", "r", stdin);
  // FOR GETTING INPUT FROM input.txt
  // freopen("output.txt", "w", stdout);
  //	#endif
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
    // cout << endl;
  }
}

/*


1. Home Page:
The starting point of the app, providing an overview to users.

2. Log In Page:
Allows existing users to log in to their accounts securely.

3. Sign Up Page: Enables new users to create accounts and join the app's community.

4. Profile Page: Users can view and edit their personal information, ensuring a personalized experience.

5. Details Entry Page: Users can enter specific details related to baby care, such as feeding schedules, sleep patterns, etc.

6. Details Page: Displays the entered details, providing a summary for easy reference.

7. Health Care Page:
Offers information and services related to baby health care, potentially including articles, tips, and links to healthcare resources.

8. App Dashboard:
Serves as the main interface where users can access various app features and navigate seamlessly between different sections.


Points to Include in Your Report:
Introduction:
Briefly introduce the purpose of the baby care app.
Mention the importance of each feature in ensuring a comprehensive baby care experience.

User Authentication:
Explain the significance of secure user authentication (Log In and Sign Up pages) to protect user data and maintain privacy.


User Profiles:
Discuss the importance of allowing users to create and manage profiles, enhancing the app's personalization and user engagement.

Data Entry and Visualization:
Describe the Details Entry and Details Page, emphasizing their role in allowing users to input and visualize essential baby care information.


Healthcare Information:
Discuss the Health Care Page, highlighting its role in providing valuable healthcare resources, which can be vital for parents seeking reliable information.


Navigation and User Experience:
Emphasize the significance of the App Dashboard in providing users with a central hub for navigating different sections, ensuring a smooth and intuitive user experience.


Conclusion:
Summarize the key features and their importance in creating a comprehensive baby care app.
Mention how the app's structure facilitates user engagement, data management, and access to crucial healthcare information.


Future Enhancements:
Optionally, you can include a section discussing potential future enhancements, such as adding chat support for users to ask questions or integrating wearable devices for health monitoring.


By incorporating these points into your report, you'll provide a clear understanding of your app's structure and its significance in the context of baby care.




*/

/*


Creating a flowchart based on the provided block diagram can be a bit challenging in this format. However, I can describe how you might structure the flowchart, and then I can provide the points for your report.

### Flowchart Description:

1. **Start:** This is the beginning of the flowchart.
2. **Decision:** This is where the user decides whether to log in or sign up.
   - **If Log In:**
     - *Authentication:* Check user credentials.
     - **If Valid:**
       - *Redirect to Profile Page:* User can view and edit their profile.
       - *Redirect to Details Page:* User can view entered details.
     - **If Invalid:**
       - *Error Message:* Display an error message and allow the user to try again.
   - **If Sign Up:**
     - *Registration:* User creates a new account.
     - *Redirect to Profile Page:* User can fill out their profile information.
     - *Redirect to Details Entry Page:* User enters specific baby care details.
3. **Details Page:** User can view entered details.
   - *Option to Edit:* User can edit the entered details.
4. **Health Care Page:** Provides access to healthcare resources and information.
5. **App Dashboard:** Main interface for accessing all app features.
6. **End:** This is the end of the flowchart.

### Points for Your Report:

1. **User Authentication:**
   - Explain the importance of secure user authentication to protect user data and privacy.
   - Highlight the user experience aspects, such as error handling for incorrect login attempts.

2. **User Profiles:**
   - Discuss how user profiles enhance personalization, allowing users to manage their information according to their needs.
   - Emphasize the role of the Profile Page in enabling users to have a personalized experience within the app.

3. **Data Entry and Visualization:**
   - Explain the significance of Details Entry Page in capturing specific baby care data.
   - Discuss the Details Page, emphasizing how it provides a summary and visualization of the entered data, ensuring easy access and understanding for users.

4. **Healthcare Information:**
   - Describe the Health Care Page and how it serves as a valuable resource hub for parents, offering reliable healthcare information and tips.
   - Discuss how this feature enhances the app's value by providing a comprehensive baby care experience beyond basic data management.

5. **User Navigation and Experience:**
   - Explain how the flow of the app, represented in the flowchart, ensures a seamless user experience.
   - Discuss the role of the App Dashboard as a central interface, simplifying navigation and ensuring users can easily access different sections of the app.

6. **Conclusion:**
   - Summarize the key features and their roles in creating a user-friendly, comprehensive baby care app.
   - Reflect on how these features collectively enhance the app's functionality, making it a valuable tool for parents in managing their baby's care.

By incorporating these points into your report, you will provide a detailed understanding of your app's flow and its significance in the context of baby care.



*/