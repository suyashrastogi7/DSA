#include <iostream>

using namespace std;

void update(int *p) {

  // Updates the address of the pointer locally, and doesnt change the orignal
  // pointer -> should not do ❌
  p = p + 1;

  // Updates the value at address stored in the pointer -> should do ✅
  *p = *p + 1;
}

void print(int *ptr){
  cout << "Value at p => " << *(ptr) << endl;
}

// this arr is only the pointer to the first element, whole array isnt passed
// which is same as int getSum(int *arr, int n){...}
int getSum(int arr[], int n){
  int sum = 0;
  for(int i=0; i<n; i++){
    sum += arr[i];
  }
  return sum;
}

int call() {
  int a = 5;

  int *p = &a;

  update(p);

  print(p);

  int arr[6] = {1, 2, 3, 4, 5, 6};
  // this passes the pointer to the first element
  cout << "Sum of array -> " << getSum(arr, 6) << endl;

  // we can also pass a portion of the array
  cout << "Sum of 4 elements is ->" << getSum(arr + 3, 6);

  return 0;
}