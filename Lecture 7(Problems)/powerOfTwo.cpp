#include<iostream>
#include<math.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int num = 0;
  if(n == 1) {
    cout<<"True"<< endl;
    return 0;
  }
  for(int i = 0; i <= 30; i++) {
    if(num == n) {
      cout<<"True"<<endl;
      return 0;
    }
    num = pow(2, i);
  }
  cout<<"False"<<endl;
  return false;
}