// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E

#include<iostream>
using namespace std;

int main() {
  int i = 1, n;
  cin>>n;
  while(i <= n) {
    int j = 1;
    while( j <= n) {
      cout<< (char)('A' + j - 1)<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
}