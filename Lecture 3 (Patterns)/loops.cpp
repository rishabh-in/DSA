// Sum of n numbers
// Sum of Even numbers
#include<iostream>
using namespace std;

int sumOfN(int a) {
  int sum = 0;
  while(a > 0) {
    sum = sum + a;
    a--;
  }
  return sum;
}

int sumOfEvenN(int a) {
  int sum = 0;
  while(a > 0) {
    if( a % 2 == 0) {
      sum = sum + a;
    }
    a--;
  }
  return sum;
}

int main() {
  int a;
  cin>>a;
  int sumOfn = sumOfN(a);
  int sumOfEven = sumOfEvenN(a);

  cout<<sumOfn<<endl;
  cout<<sumOfEven<<endl;
  return 0;
}

