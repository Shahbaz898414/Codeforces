#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int size;
	cin>>size;
	int arr1[size];
	int arr2[size];
	for(int i=0;i<size;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<size;i++){
		cin>>arr2[i];
	}

	
	print(arr2,size);
	print(arr1,size);
}