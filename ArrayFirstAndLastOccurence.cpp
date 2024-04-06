#include <iostream>

using namespace std;

// arr = [1, 2, 3, 3, 3, 5];

int firstOccurence(int arr[], int n, int key) {
  int index = -1;
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;

  while (s < e) {
    if (arr[mid] == key) {
      index = mid;
      e = mid - 1;
    } else if (arr[mid] > key) {
      e = mid - 1;
    } else if (arr[mid] < key) {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }

  return index;
}

int lastOccurence(int arr[], int n, int key) {
  int ans = -1;
  int s = 0;
  int e = n - 1;
  int mid = s + (s - e) / 2;

  while (s < e) {
    if (arr[mid] == key) {
      ans = mid;
      s = mid + 1;
    } else if (arr[mid] > key) {
      e = mid - 1;
    } else {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

// int main() {
//   int arr[8] = {1, 2, 3, 4, 4, 4, 5, 6};
//   cout << firstOccurence(arr, 8, 4) << endl;
//   cout << lastOccurence(arr, 8, 4) << endl;
// }