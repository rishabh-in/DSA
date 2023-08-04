#include<iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  // int arr[n];         // bad practice
  int arr[5];
  for(int i = 0; i < n; i++) {
    cin>>arr[i];
  }

  int min = INT32_MAX, max = INT32_MIN;
  for(int i = 0; i < n; i++) {
    if(arr[i] >= max) {
      max = arr[i];
    }
    if(arr[i] <= min) {
      min = arr[i];
    }
  }
  cout << "Max: " << max<<endl;
  cout<< "MIN: "<< min << endl;
  return 0;
}