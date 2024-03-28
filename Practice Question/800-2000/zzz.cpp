#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define readInput(a)  \
    for (auto &i : a) \
    cin >> i
#define printOutput(a) \
    for (auto &i : a)  \
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
    int t;cin>>t;

    while(t--){
       int a,b,c; cin>>a>>b>>c;
		if((b+c)%3 > c) cout<<-1<<endl;
		else cout<<(b+c+2)/3+a<<endl;
    }
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





*/