// A 
// B B 
// C C C 
// D D D D

#include<iostream>
using namespace std;

int main() {
  int i = 1, n;
  cin>>n;
  while(i <= n) {
    int j = i;
    while(j < i*2) {
      cout<< char('A' + j - 1)<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
}