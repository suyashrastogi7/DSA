#include <iostream>

using namespace std;

int BinarySearch(int arr[], int size, int key){
  int start = 0;
  int end = size-1;
  int mid = start + (end - start)/2;
  while(start <= end){
    if(arr[mid] == key){
      return mid;
    }

    if(key > arr[mid]){
      start = mid + 1;
    }
    else {
      end = mid - 1;
    }

    mid = start + (end - start)/2;
  }
  return -1;
};

// int main() {
//   int arr[8] = {2, 4, 6, 8, 10, 12, 14, 16};
//   int result = BinarySearch(arr, 8, 4);
//   cout << result;
//   return 0;
// }

/* 
This can cause issues while summing up large values in int:
do not use: mid = (start + end)/2;
use : mid = start + (ending - start)/2;

*/