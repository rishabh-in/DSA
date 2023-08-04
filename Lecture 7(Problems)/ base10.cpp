// Complement of base 10

#include<iostream>
using namespace std;

int main() {
  int n, i, ans = 0;
  cin>>n;
  int m = n;
  int mask = 0;
  while(m != 0) {
    mask = (mask << 1) | 1;
    m = m >> 1;
  }
  ans = (~n) & mask;
  cout<<ans<<endl;
  return 0;
}