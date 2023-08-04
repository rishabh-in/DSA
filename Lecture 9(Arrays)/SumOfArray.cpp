#include<iostream>
using namespace std;
int getSum(int arr[], int n) {
  int sum = 0;
  for(int i = 0; i < n; i++) {
    sum = sum + arr[i];
  }
  return sum;
}

int main() {
  int n, arr[100];
  cin>>n;
  for(int i = 0; i < n; i ++) {
    cin>>arr[i];
  }
  int result = getSum(arr, n);
  cout<<"Sum is: "<<result<<endl;
}

