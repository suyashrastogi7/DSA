#include <iostream>

using namespace std;

// Get pivot to see in which line we want to search
int getPivot(int arr[], int n, int k){
  int s = 0;
  int e = n-1;
  int mid = s + (e-s)/2;

  while(s < e){
    if(arr[mid] >= arr[0]){
      s = mid + 1;
    }
    else {
      e = mid;
    }
    mid = s + (e-s)/2;
  }
  return s;
}

// After finding pivot, we apply binary search to the line we know element will be in
int binarySearch(int arr[], int start, int end, int key){
  int res = -1;
  int s = start;
  int e = end;
  int mid = s + (e-s)/2;

  while(s < e){
    if(key == arr[mid]){
      return mid;
    }
    
    if(key > arr[mid]){
      // go to left
      s = mid+1;
      
    }
    else {
      // go to right
      e = mid-1;
    }
    mid = s + (e-s)/2;
  }
  return res;
}

//checking in which line BS is to be applied
int searchInRotatedSortedArray(int arr[], int n, int k){
  int pivot = getPivot(arr, n, k);
  int res = -1;
  if(k >= arr[pivot] && k <= arr[n-1]){
    res = binarySearch(arr, pivot, n-1, k);
  }
  else {
    res = binarySearch(arr, 0, pivot, k);
  }
  return res;
}

// int main(){
//   int arr[5] = {7, 8, 1, 3, 5};
//   int x = searchInRotatedSortedArray(arr, 5, 3);
//   cout << "Result ==>" << x << endl;
// }s