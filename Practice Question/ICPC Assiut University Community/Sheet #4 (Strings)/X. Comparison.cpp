#include<bits/stdc++.h>
using namespace std;
int main () {
	string value,sub1 = "",sub2;
	cin>>value;   
	string myValue = value;  

	string smallString = value;
	for(int i = 0;i<value.length()-1;i++){
		sub1 += value[i]; 
		
    // cout<<myValue<<"  myvalue"<<endl;
		sub2 = myValue.erase(0,1); 
    cout<<sub2<<"  sub2Erase"<<endl; 
		sort(sub1.begin(),sub1.end()); 
    cout<<sub1<<"  sub1"<<endl;
		sort(sub2.begin(),sub2.end()); 
     cout<<sub2<<"  sub2"<<endl;
		smallString = min(smallString,sub1+sub2);
    cout<<	smallString<<"  	smallString"<<endl;
	}
	cout<<smallString<<" ans"<<endl;
}