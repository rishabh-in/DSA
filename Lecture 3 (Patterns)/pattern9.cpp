// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1

#include<iostream>
using namespace std;

int main() {
  int i=1, n;
  cin>>n;
  while(i <= n) {
    int value = i;
    int j = 1;
    while(j <= i) {
      cout<<value<<" ";
      value--;
      j++;
    }
    cout<<endl;
    i++;
  }

  // Another way without using an extra variable
  i = 1;
  while(i <= n) {
    int j = 1;
    while(j <= i) {
      cout<<(i - j + 1)<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
}