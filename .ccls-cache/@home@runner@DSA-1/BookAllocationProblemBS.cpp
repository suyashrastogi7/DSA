#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid) {
  int studentCount = 1;
  int pages = 0;

  for(int i = 0; i< n; i++){
    if(pages + arr[i] <= mid){
      pages += arr[i];
    }
    else {
      studentCount++;
      if(studentCount > m || arr[i] > mid){
        return false;
      }
      pages = arr[i];
    }
  }
  return true;
}

int sum = 0;

int getSum (int arr[], int n) {
  for(int i = 0; i< n; i++) {
    sum = sum + arr[i];
  } 
  return sum;
}

int bookAllocation (int arr[], int n, int m) {
  int s = 0;
  int e = getSum(arr, n);

  int mid = s + (e-s)/2;

  int ans = 0;
  
  while(e >= s){
    if(isPossible(arr, n, m, mid)){
      ans = mid;
      e = mid - 1;
    }
    else {
      s = mid + 1;
    }
    mid = s + (e-s)/2;
  }
  
  return ans;
}

// int main() {
//   int arr[4] = {10, 20, 30, 40};
//   cout << bookAllocation(arr, 4, 2);
//   return -1;
// }