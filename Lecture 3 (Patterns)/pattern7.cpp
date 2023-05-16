// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15

#include<iostream>
using namespace std;

int main() {
  int row = 1, n, count = 1;
  cin>>n;
  while(row <= n) {
    int column = 1;
    while(column <= row) {
      cout<<count<< " ";
      count++;
      column++;
    }
    cout<<endl;
    row++;
  }
}