#include<bits/stdc++.h>
using namespace std;

void makeInvTri(int rows, int spaces = 0) {
  if (rows < 0) return;
  int r = rows;
  int s = spaces;
  while(s--) cout << " ";
  while(r--) cout << "*";
  cout << endl;
  makeInvTri(rows - 2, ++spaces);
}

void invTri(int rows)
{
  makeInvTri((rows-1)*2+1);
}

int main() {
  int n;cin>>n;

   invTri(n);
  return 0;
}