#include <iostream>
#include<set>
using namespace std;
int main() {
	 int n;
	 cin>>n;
	 set<int> s1;
	  int q,y;
	  cin>>q;
	  for(int i=0;i<q;i++){
		  int x;
		  cin>>x;
		  s1.insert(x);
	  }
	  cin>>y;
	  for(int i=0;i<y;i++){
		  int w;
		  cin>>w;
		  s1.insert(w);
	  }
	  if(s1.size()==n)
		  cout<<"I become the guy.";
	  else
		  cout<<"Oh, my keyboard!";
	return 0;
}