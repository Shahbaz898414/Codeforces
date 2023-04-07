#include<bits/stdc++.h>
using namespace std;

const int index=500;

int Matrix(int a[index][index],int n,int x,int y){
	
  for(int i=0;i<n;i++){
		int temp = a[x][i]; 
		a[x][i] = a[y][i]; 
		a[y][i] = temp; 
	}

  for(int i=0;i<n;i++){
		int temp = a[i][y]; 
		a[i][y] = a[i][x]; 
		a[i][x] = temp; 
	}

  for(int i=0;i<n;i++){ 
		for(int z=0;z<n;z++){ 
			cout<<a[i][z]<<" "; 
		}
		cout<<endl;
	}
  
}


int main(){
	int n,x,y;
  cin>>n>>x>>y;

  int a[index][index];

  for (int i = 0; i < n; i++)
  {

    for(int z=0;z<n;z++){
      cin>>a[i][z];
    }
    
  }

  x--;y--;
  

  Matrix(a,n,x,y);

  return 0;
}