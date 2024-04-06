#include <iostream>

using namespace std;

void sort(int arr[], int n){
  int minIndex = 0;
  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
       if(arr[j] < arr[minIndex]) minIndex = j; 
    }
    swap(arr[i], arr[minIndex]);
  }
}

void printArray(string message, int arr[], int n) {
  cout << message << " ";
  for(int k = 0; k< n; k++){
    cout << arr[k] << ", ";
  }
  cout << endl;
}

// int  main() {
//   int arr[5] = {2, 5, 1, 10, 4};
//   sort(arr, 5);
//   printArray("Result after sorting ==>",arr, 5);
//   return -1;
// }