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

int countSubarraysWithAtMostKDistinct(vector<int> &nums, int k)
{
	int n = nums.size();

	unordered_map<int, int> mp;

	int i = 0, j = 0;

	int c = 0;

	while (j < n)
	{


		mp[nums[j]]++;


		while (i <= j && mp.size() > k)
		{
			if (--mp[nums[i]] == 0)
				mp.erase(nums[i]);
			i++;
		}


		c += (j - i + 1);


		j++;


	}

	return c;


}

int subarraysWithKDistinct(vector<int> &nums, int k)
{

	// int d1=countSubarraysWithAtMostKDistinct(nums, k);
	// int d2=countSubarraysWithAtMostKDistinct(nums, k - 1);

	// cout<<d1<<" "<<d2<<endl;
	return countSubarraysWithAtMostKDistinct(nums, k) - countSubarraysWithAtMostKDistinct(nums, k - 1);
	// return 1;


}

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;

	vector<int> arr(n);

	for (int i = 0; i < n; i++)
	{
		/* code */
		cin >> arr[i];
	}

	// cout<<endl;

	cout << subarraysWithKDistinct(arr, k);
}


/*
Don't worry about the people God
removed from your life.

He heard conversations you didn't.
He saw things you couldn't.
He made moves you wouldn't.



/////////////////////////////////////////////////////////////



Title	Exploration of a new Component of the opensource GEN3 framework


Description	
The contributor will assess the viability of the new GEN3 frontend framework, involving tasks such as local deployment and exploration of various customizations. If the framework proves to be a valuable REACTJS application, the contributor will proceed to migrate the main component from our existing REACTJS frontend application to this new frontend framework.
Expected Outcomes	
Either migrate our main components to the new application if the new tool yields positive results or remove the migration of the new frontend framework from our roadmap.

Skills	Javascript, REACTJS

Mentors	TBD - One of the Senior Developer in the team.

Project Size	350 hours

Rating	medium


Thank you for considering me for the position. Given my current commitments, I would be able to start within one weeks of receiving a formal offer. Looking forward to the opportunity to contribute to the team at doola.



Hi,

I hope this message finds you well! I came across the DATA ANALYTICS ( https://walmart.wd5.myworkdayjobs.com/en-US/WalmartExternal/job/DATA-ANALYST-II--DATA-ANALYTICS_R-1796887-1?utm_source=Data_Analyst_ll,_Data_Analytics_unstop&utm_medium=listing&utm_campaign=unstop ) at Walmart. As an aspiring Software Engineer, I admire the company's innovative work. If possible, could you kindly refer me? I'd greatly appreciate it!

Best regards,
Shahbaz Khan

Resume Link :-
https://drive.google.com/file/d/1KtvsYeT5PYaj_gk8VTDHismkNZzeOu6z/view?usp=sharing



I'm shahbaz khan, a B.E SLRTCE  from the 24rd batch. Eager to join your team, I'm driven to enhance my skills and collaborate with your talented professionals. Kindly consider granting me an opportunity to interview at your esteemed organization. Your consideration is deeply appreciated.

Best regards,
Shahbaz Khan







*/