#include<iostream>
using namespace std;

int reverse(int arr[], int n) {
  cout<<"Address of array: "<<&arr<<endl;
  int i, j, temp = 0;
  i = 0;
  j = n - 1;
  while(i != j) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
  return 0;
}

int main() {
  int arr[100], n;
  cin>>n;
  for(int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  cout<<"Address of array: "<< &arr << endl;
  reverse(arr, n);
  cout<<"Reversed Array is: ";
  for(int i = 0; i < n; i++) {
    cout<<arr[i]<<" ";
  }
  cout << endl;
  return 0;
}