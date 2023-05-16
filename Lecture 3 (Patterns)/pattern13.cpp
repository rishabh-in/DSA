#include<iostream>
using namespace std;

int main() {
  int i = 1, n;
  cin>>n;
  while(i <= n) {
    int value = 'A' + i - 1;
    int j = 1;
    while(j <= n) {
      cout<< char(value)<<" ";
      value++;
      j++;
    }
    i++;
    cout<<endl;
  }
}