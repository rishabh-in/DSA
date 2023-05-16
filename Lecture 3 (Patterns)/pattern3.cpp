// pattern 3

// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5

// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 

#include<iostream>
using namespace std;

int main() {
  int n, i = 1;
  cin>>n;

  while( i <= n ) {
    int j = 1;
    while(j <= n) {
      cout<<j<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  i = 1;
  while( i <= n ) {
    int j = 1;
    while(j <= n) {
      cout<<n-j+1<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}