#include <iostream>
#include <math.h>

using namespace std;

int decimalToBinary() {
  int n;
  printf("Enter a number to convert to binary");
  cin >> n;

  int answer = 0;
  int i = 0;
  while (n != 0) {
    int bit = n & 1;
    answer = (bit * pow(10, i)) + answer;
    n = n >> 1;
    i++;
  }
  cout << "Binary is : " << answer;
  return 1;
}