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

	int d1=countSubarraysWithAtMostKDistinct(nums, k);
	int d2=countSubarraysWithAtMostKDistinct(nums, k - 1);

	cout<<d1<<" "<<d2<<endl;
	// return countSubarraysWithAtMostKDistinct(nums, k) - countSubarraysWithAtMostKDistinct(nums, k - 1);
	return 1;


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

	cout<<endl;

	cout << subarraysWithKDistinct(arr, k);
}

/*




Docker Engineer


Outline
Work for a leading search engine specialist company based in California, developing and managing the software
testing pipeline to maintain a continuous flow of software products and updates using Docker Kubernetes.

Key Responsibilities
· Design and implement containerization strategies using Docker to streamline deployment and scalability
· Build CI/CD pipelines to produce high quality and fast-turnover product updates
· Leverage Infrastructure as Code (IaC) principles to automate infrastructure provisioning and configuration
. Ensure network security and compliance within Kubernetes environments
· Collaborate with cross-functional teams to define infrastructure requirements and optimize cloud-based
solutions (AWS/Azure/GCP)
· Conduct performance tuning and optimization of Kubernetes clusters
· Implement monitoring and logging solutions for Kubernetes using Prometheus and ELK Stack
· Maintain an up-to-date knowledge of industry trends and new processes, software and techniques
· Mentor junior developers and engineers, providing guidance on best practices and new software
· Use Agile methodology to successfully and efficiently manage projects through the software development
lifecycle as part of a wider DevOps team

Key Achievements
· Implemented a robust CI/CD pipeline using Docker and Kubernetes in 2021, reducing the time to deliver
software updates by 70% and boosting revenue by 8% in that year.



Implemented a robust CI/CD pipeline using Docker and Kubernetes, reducing the time to deliver software updates by 70%.


PHP
JavaScript
TSQL
HTML
Java
CSS
Hack


//////////////////////////////////////////////


𝐓𝐨𝐝𝐚𝐲 𝐰𝐚𝐬 𝐦𝐲 𝟕𝟑𝐬𝐭 𝐝𝐚𝐲 𝐨𝐮𝐭 𝐨𝐟 𝐭𝐡𝐞 𝟕𝟓 𝐝𝐚𝐲𝐬 𝐨𝐟 𝐡𝐚𝐫𝐝 𝐜𝐡𝐚𝐥𝐥𝐞𝐧𝐠𝐞𝐬. 𝐒𝐨 𝐭𝐨𝐝𝐚𝐲. 𝐈 𝐬𝐨𝐥𝐯𝐞𝐝 𝟓 𝐪𝐮𝐞𝐬𝐭𝐢𝐨𝐧𝐬.

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝟏 : 𝟐𝟗𝟓𝟖. 𝐋𝐞𝐧𝐠𝐭𝐡 𝐨𝐟 𝐋𝐨𝐧𝐠𝐞𝐬𝐭 𝐒𝐮𝐛𝐚𝐫𝐫𝐚𝐲 𝐖𝐢𝐭𝐡 𝐚𝐭 𝐌𝐨𝐬𝐭 𝐊 𝐅𝐫𝐞𝐪𝐮𝐞𝐧𝐜𝐲
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤 🔗: [https://lnkd.in/d7H3CJYy]


𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝟐 : 𝟕𝟔. 𝐌𝐢𝐧𝐢𝐦𝐮𝐦 𝐖𝐢𝐧𝐝𝐨𝐰 𝐒𝐮𝐛𝐬𝐭𝐫𝐢𝐧𝐠
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤 🔗: [https://lnkd.in/dWZJEC2i]


𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝟑 : 𝐁. 𝐅𝐢𝐫𝐞𝐰𝐨𝐫𝐤𝐬
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤 🔗: [https://lnkd.in/d_22tWhz]


𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝟒 : 𝐀. 𝐒𝐞𝐭𝐭𝐢𝐧𝐠 𝐮𝐩 𝐂𝐚𝐦𝐩
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤 🔗: [https://lnkd.in/dNGhWXC8]


𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝟓 : 𝐀. 𝐃𝐞𝐬𝐭𝐫𝐨𝐲𝐢𝐧𝐠 𝐁𝐫𝐢𝐝𝐠𝐞𝐬
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤 🔗: [https://lnkd.in/dp8c8t4p]


#75dayschallenge
#challenge
#consistency
#Cp
#AlgorithmExplained
#ProblemSolving
#lessons
#learning





		int t, n, k;
	cin>>t;


	while(t--){
		cin>>n>>k;
		int a[200002];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int ans=a[0]+n-1;
		for(int i=0;i<n;i++){
			if(i) k-=a[i];
			double h=k;
			h=h/(n-i);
			h=floor(h);
			int w=h;
			ans=min(ans,max(0ll,a[0]-w)+n-i-1);
		}
		cout<<ans<<'\n';
	}



*/