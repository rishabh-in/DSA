// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7

#include<iostream>
using namespace std;

int main() {
  int row = 1, n;
  cin>>n;

  while(row <= n) {
    int value = row, column = 1;
    while(column <= row) {
      cout<<value<<" ";
      column++;
      value++;
    }
    cout<<endl;
    row++;
  }
  return 0;
}