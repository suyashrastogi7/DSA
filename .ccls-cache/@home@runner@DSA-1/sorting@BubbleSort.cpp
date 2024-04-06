#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n){
  for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
      if(arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
      }
    }
  }
}

void printSortedArray(string message, int arr[], int n) {
  cout << message << " ";
  for(int k = 0; k< n; k++){
    cout << arr[k] << ", ";
  }
  cout << endl;
}

int main() {
  int arr[5] = {2, 5, 1, 10, 4};
    bubbleSort(arr, 5);
    printSortedArray("Result after sorting ==>",arr, 5);
    return -1;
}