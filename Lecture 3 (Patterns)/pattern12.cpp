// A B C D 
// E F G H 
// I J K L 
// M N O P

#include<iostream>
using namespace std;

int main() {
  int i = 1, n, value = 'A';
  cin>>n;
  while(i <= n) {
    int j = 1;
    while(j <= n) {
      cout<<(char)(value)<<" ";
      value++;
      j++;
    }
    cout<<endl;
    i++;
  }
}