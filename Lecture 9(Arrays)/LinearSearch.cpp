#include<iostream>
using namespace std;

int findValue(int arr[], int n, int value) {
  for(int i = 0; i < n; i++) {
      if(arr[i] == value) {
        cout<<"Value find at index: "<< i <<endl;
        return 1;
      }
  }
  cout<<"Value is not present" << endl;
  return 0;
} 

int main() {
  int arr[100], n, value;
  cin>>n;
  for(int i = 0; i < n; i++) {
    cin>>arr[i];
  }

  cout<<"Enter the value you want to find: "; 
  cin>>value;
  findValue(arr, n, value);
  return 0;
}