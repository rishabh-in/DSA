#include<iostream>
using namespace std;

int swapAlternate(int arr[], int n) {
  int i, j;
  i = 0;
  j = 1;
  while(j <= (n-1)) {
    swap(arr[i], arr[j]);
    i = i+2;
    j = j+2;
  }
  return 0;
}

int main() {
  int arr[100], n;
  cin>>n;
  for(int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  swapAlternate(arr, n);
  cout<<"Revised Array is: ";
  for(int i = 0; i < n; i++) {
    cout<<arr[i]<<" ";
  }
  cout << endl;
  return 0;
}