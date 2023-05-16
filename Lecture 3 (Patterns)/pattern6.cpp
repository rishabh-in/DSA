// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5

#include<iostream>
using namespace std;
 
int main() {
  int row = 1, n;
  cin>>n;
  while(row <= n) {
    int column = 1;
    while(column <= row) {
      cout<<row<<" ";
      column++;
    }
    cout<<endl;
    row++;
  }
}