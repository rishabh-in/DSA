#include<iostream>
#include<math.h>
using namespace std;

int main() {
  int i = 0, ans = 0, n;
  cin>>n;

  while(n != 0) {
    int lastBit = n % 10;
    cout<<"i: "<<lastBit<<endl;
    if(lastBit == 1) {
      ans = ans + pow(2, i);
    }
    n = n / 10;
    i++;
  } 
  cout<<"Binary to Decimal: "<<ans<<endl;
}